// the function in book, copied directly



#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define MAX_NUMBER 100

void initialize_number_generator(void);

int new_secret_number(void);
void read_guesses(int secret_number);

int main(void){

	char command;
	int secret_number;

	printf("guess secret number between 1 and %d. \n\n", MAX_NUMBER);
	initialize_number_generator();

	do {
		secret_number= new_secret_number();
		printf("A new number has been chosen.  \n");
		read_guesses(secret_number);
		printf("Play again? (Y/N) ");
		scanf(" %c", &command);
		printf("\n");
	}
	while(command == 'y' || command == 'Y');

	return 0;



	/****************************************************************
	*  initialize number generator:  initializes random
	*								number generator using
	*								the time of day    
	****************************************************************/


	void initialize_number_generator(void){
		srand((unsigned) time(NULL))
	}



	}







}