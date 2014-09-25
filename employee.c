/*
 * Daniel Redelmeier and Tyler Zon
 *
 * CS31 - Lab 1
 * 27 January 2014
 *
 * This lab implements an employee database from a file,
 * allowing some lookup methods and adding employees
 */

#include <stdio.h>      // the C standard I/O library
#include <stdlib.h>     // the C standard library
#include <string.h>     // the C string library
#include "readfile.h"   // my file reading routines

#define MAXFILENAME    128
#define MAXNAME         64
#define MAXEMPLOYEES  1000      // assumed 1000 employees max

// creating the employee struct
struct employee {
  int   id;
  char  firstName[MAXNAME];
  char  lastName[MAXNAME];
  int   salary;
};
typedef struct employee employee;

// function prototypes
void get_filename_from_commandline(char filename[], int argc, char *argv[]);
int getDatabase(char *filename, employee database[]);
int menu();
void printDatabase(employee database[], int numEmployees);
void lookupById(employee database[], int numEmployees);
int binarySearch(employee database[], int id, int numEmployees);
void printEmployee(employee employee);
void lookupByLastName(employee database[], int numEmployees);
int addEmployee(employee database[], int numEmployees);

/********************************************************************/
int main (int argc, char *argv[]) {

  char filename[MAXFILENAME];
  int menuChoice = 0;
  employee database[MAXEMPLOYEES];
  int numEmployees;

  // this initializes the filename string from the command line arguments
  get_filename_from_commandline(filename, argc, argv);

  numEmployees = getDatabase(filename, database);

  while(menuChoice != 5) {
    menuChoice = menu();
    if (menuChoice == 1) printDatabase(database, numEmployees);
    else if (menuChoice == 2) lookupById(database, numEmployees);
    else if (menuChoice == 3) lookupByLastName(database, numEmployees);
    else if (menuChoice == 4) numEmployees = addEmployee(database, numEmployees);
    else if (menuChoice != 5) {
      printf("Sorry, invalid option. Try again.\n");
    }
  }

  printf("\nThank you for using the database\n");
  return 0;
}
/********************************************************************/
/* menu
 * Prints the main database menu
 * Inputs: none
 * Returns: the selected option
 */

int menu() {

  int option;

  printf("\nEmployee Database Menu:\n\n");
  printf("  1. Print database\n");
  printf("  2. Lookup employee by ID\n");
  printf("  3. Lookup employee by last name\n");
  printf("  4. Add an employee\n");
  printf("  5. Quit\n");

  printf("\nEnter your choice: ");
  scanf("%d", &option);
  while (option < 1 || option > 5) {
    printf("Invalid choice, enter a number between 1 and 5: ");
    scanf("%d", &option);
  }

  return option;
}

/********************************************************************/
/* getDatabase
 * Reads in the initial employee data and adds it to the database
 * Inputs: the name of the file and an empty array
 * Returns: the number of employees contained in the file
 */

int getDatabase(char *filename, employee database[]) {

  int ret, id, salary;
  int numEmployees = 0;
  char firstName[MAXNAME], lastName[MAXNAME];

  ret = open_file(filename);
  if (ret == -1) {
    printf("Error: Could not open database file\n");
    exit(1);
  }

  while (ret != -1) {
    ret = read_int(&id);
    if(ret) { break; }
    ret = read_string(firstName);
    if(ret) { break; }
    ret = read_string(lastName);
    if(ret) { break; }
    ret = read_int(&salary);
    if (ret == 0) {        // good so far, add line data to employee array
      database[numEmployees].id = id;
      database[numEmployees].salary = salary;
      strcpy(database[numEmployees].firstName, firstName);
      strcpy(database[numEmployees].lastName, lastName);
      numEmployees++;
    }
  }

  close_file();
  return numEmployees;
}

/********************************************************************/
/* printDatabase
 * Displays all employee information in an easy-to-read format
 * Inputs: the employee database, number of employees
 * Returns: none
 */

void printDatabase(employee database[], int numEmployees) {

  printf("\nNAME\t\t\t\tSALARY\t\t    ID\n");
  printf("------------------------------------------------------\n");

  int i;
  for (i = 0; i < numEmployees; i++) {
    printf("%-10s\t%-15s\t%6d\t\t%d\n", database[i].firstName, database[i].lastName, database[i].salary, database[i].id);
  }

  printf("------------------------------------------------------\n");
  printf("Number of employees: %d\n", numEmployees);
}

/********************************************************************/
/* lookupById
 * Searches the database for a user-specified ID, calling binarySearch
 * to detect matches
 * Inputs: the employee database, number of employees
 * Returns: none
 */

void lookupById(employee database[], int numEmployees) {

  int id;
  printf("\nEnter six-digit ID to search: ");
  scanf("%d", &id);
  while (id < 100000 || id > 999999) {
    printf("Invalid ID, please try again: ");
    scanf("%d", &id);
  }

  int index = binarySearch(database, id, numEmployees);
  if (index == -1) {
    printf("No match for that ID.\n");
  }
  else {
    employee toPrint = database[index];
    printEmployee(toPrint);
  }
}

/********************************************************************/
/* binarySearch
 * Performs binary search given the parameters of the database, the ID
 * number, and the number of employees
 * Inputs: the employee database, ID requested, number of employees
 * Returns: the index of the database containing an employee with the
 * specified ID (if any)
 */

int binarySearch(employee database[], int id, int numEmployees) {

  int low = 0;
  int high = numEmployees - 1;
  int mid;

  while (low <= high) {
    mid = (low + high) / 2;
    if (id == database[mid].id) {
      return mid;
    }
    else if (id < database[mid].id) {
      high = mid - 1;
    }
    else {
      low = mid + 1;
    }
  }

  return -1;
}

/********************************************************************/
/* printEmployee
 * Prints the data for an employee
 * Inputs: an employee struct
 * Returns: none
 */

void printEmployee(employee employee) {

  printf("\nNAME\t\t\t\tSALARY\t\t    ID\n");
  printf("------------------------------------------------------\n");
  printf("%-10s\t%-15s\t%6d\t\t%d\n", employee.firstName, employee.lastName, employee.salary, employee.id);
  printf("------------------------------------------------------\n");
}

/********************************************************************/
/* lookupByLastName
 * Searches for an employee in the database given their last name,
 * and prints the data if a match is found
 * Inputs: the employee database, number of employees
 * Returns: none
 */

void lookupByLastName(employee database[], int numEmployees) {

  char name[MAXNAME];
  printf("Please enter the employee's last name (case-sensitive): ");
  scanf("%s", name);
  int i;
  for (i = 0; i < numEmployees; i++) {
    if (strcmp(name, database[i].lastName) == 0) { // compares strings in C
      employee toPrint = database[i];
      printEmployee(toPrint);
      return;
    }
  }

  if (i == numEmployees) {
    printf("The name provided does not match anyone in the database.\nMake sure capitalization is correct\n");
  }
}

/***********************************************************/
/* addEmployee
 * Adds an employee to the database with user-specified data
 * Inputs: the employee database, number of employees
 * Returns: the new number of employees
 */

int addEmployee(employee database[], int numEmployees) {

  int id;
  char firstName[MAXNAME];
  char lastName[MAXNAME];
  int salary;

  printf("Please enter the new employee's first name: ");
  scanf("%s", firstName);

  printf("Please enter the new employee's last name: ");
  scanf("%s", lastName);

  printf("Please enter the new employee's ID number: ");
  scanf("%d", &id);
  while (id < 100000 || id > 999999) {
    printf("Invalid ID, please enter a number between 100000 and 999999: ");
    scanf("%d", &id);
  }

  printf("Please enter the new employee's salary: ");
  scanf("%d", &salary);
  while (salary < 30000 || salary > 150000) {
    printf("Invalid salary, please enter a number between 30000 and 150000");
    scanf("%d", &salary);
  }

  // creating the employee struct
  employee newEmployee;
  newEmployee.id = id;
  strcpy(newEmployee.firstName, firstName);
  strcpy(newEmployee.lastName, lastName);
  newEmployee.salary = salary;

  printEmployee(newEmployee);
  char ans;
  printf("\nAre you sure you want to add them to the database (y/n)?: ");
  scanf(" %c", &ans);
  if (ans == 'y' || ans == 'Y') {
    database[numEmployees] = newEmployee;
    numEmployees++;
    printf("The employee was added.\n");
  }
  else {
    printf("The employee was not added.\n");
  }

  return numEmployees;
}

/********************************************************************/

/*
 * I'm giving you this complete function: DO NOT modify it
 *
 *  This function gets the filename passed in as a command line option
 *  and copies it into the filename parameter. It exits with an error
 *  message if the command line is badly formed.
 *   filename: the string to fill with the passed filename
 *   argc, argv: the command line parameters from main
 *               (number and strings array)
 */
void get_filename_from_commandline(char filename[], int argc, char *argv[]) {

  if(argc != 2) {
    printf("Usage: ./workersDB database_file\n");
    // exit function: quits the program immediately...some errors are not
    // recoverable by the program, so exiting with an error message is
    // reasonable error handling option in this case
    exit(1);
  }
  if(strlen(argv[1]) >= MAXFILENAME) {
    printf("Filename, %s, is too long, cp to shorter name and try again\n",
        filename);
    exit(1);
  }
  strcpy(filename, argv[1]);
}