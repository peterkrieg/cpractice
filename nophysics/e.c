#include <stdio.h>
#include <string.h>
#include <ctype.h>





#define N 5   

int main (){



	// printf("        *\n");
	// printf("       *\n");
	// printf("      *\n");
	// printf("     *\n");
	// printf("*   *\n");
	// printf(" * *\n");
	// printf("  *    \n");






	// int m;
	// printf("Enter amount of money:    ");
	// scanf("%d", &m);
	// printf("Your amount with tax is ");
	// printf("%.2f\n \a", (float)m*1.05);



	// int firstnum, secondnum;
	// printf("enter a number:    ");
	// scanf("%d", &firstnum);
	// printf("enter second number:       ");
	// scanf("%d", &secondnum);
	// printf("The sum of these numbers is:  %d \n", firstnum+secondnum);




	// int month, day, year;
	// printf("Enter a date in format mm/dd/yyyy:      ");
	// scanf("%d/%d/%d", &month, &day, &year);
	// printf("Date you gave is:  %d%.2d%d\n", year, month, day);



	// int itemnumber, month, day, year;
	// float unitprice;
	// printf("\nEnter item number:    ");
	// scanf("%d", &itemnumber);
	// printf("Enter unit price:     ");
	// scanf("%f", &unitprice);
	// printf("Enter purchase date (mm/dd/yyyy):     ");
	// scanf("%d/%d/%d", &month, &day, &year);
	// printf("\nItem                  Unit Price                      Purchase Date");
	// printf("\n %d               %f                        %d/%d/%d \n", itemnumber, unitprice, month, day, year);




	// int number;
	// printf("Enter a 2 digit number:        ");
	// scanf("%d", &number);
	// printf("Reversal of your number is:    %d%d\n", (number%10), (number/10));






	// int num, digits;
	// digits = 0;
	// num = 0;
	// printf("Enter a number up to 5 digits and the program will count the number of digits!      ");
	// scanf("%d", &num);

	// if (num < 10)
	// 	{digits = 1;}
	// else if (num < 100)
	// 	{digits = 2;}
	// else if (num < 1000)
	// 	{digits = 3;}
	// else if (num < 10000)
	// 	{digits = 4;}
	// else {digits = 5;}

	// printf("your number has %d digits \n", digits);

	// int hour, minute;

	// printf("Enter a time in 24 hour format:     ");
	// scanf("%d:%d", &hour, &minute);

	// if (hour < 12)
	// 	printf("Time in 12 hour format is:     %d:%2d  AM   \n", hour, minute);
	// else if (hour == 12)
	// 	printf("Time in 12 hour format is:  %d:%2.1d PM   \n", hour, minute);
	// else if (hour > 12)
	// 	printf("Time in 12 hour format is:    %d:%2d PM   \n", (hour-12), minute);
	// else printf("Error");







	// int num1, num2, num3, num4;

	// printf("Enter four numbers, separated by a space:     ");
	// scanf("%d %d %d %d", &num1, &num2, &num3, &num4);

	// if (num1>num2 && num1>num3 && num1>num4)
	// 	printf("The largest number of the four is %d\n", num1);
	// else if (num2>num1 && num2>num3 && num2>num4)
	// 	printf("The largest number of the four is %d\n", num2);
	// else if (num3>num1 && num3>num2 && num3>num4)
	// 	printf("The largest number of the four is %d\n", num3);
	// else if (num4>num1 && num4>num2 && num4>num3)
	// 	printf("The largest number of the four is %d\n", num4);
	// else printf("there is no largest number \n");


	

	// int n=2;

	// while (n<20)
	// 	{printf("whatwhat\n");
	// 	if (n==10)
	// 		{break;}
	// 	n++;}

	// printf("program done\n");




	// int num;
	// for(;;){
	// 	printf("enter a number and I will tell you what it is cubed!  (enter 0 to stop program):              ");
	// 	scanf("%d", &num);
	// 	if(num==0)
	// 		break;
	// 	num= (num*num*num);
	// 	printf("Your number cubed is:    %d\n", num);}




	// Program finds largest number inputted by user

	// float num, largestnum, lastnum;
	// int i =0;
	// lastnum=0;
	// largestnum=0;


	// #define QUESTIONS 6 

	// while (i<QUESTIONS)
	// 	{printf("Enter a number:            ");
	// 	scanf("%f", &num);
	// 	if(num>largestnum)
	// 		{largestnum=num;}
	// 	i++;}

	// printf("\nYour largest number entered was:          %.3f\n", largestnum);


	












	// This program calculates the value of e, which is 1 + 1/1 + 1/2 + 1/3 + ... 1/n

// 	int i, n, f=1, j;
// 	float e=1.0;
// 	printf("Enter a value of n and I will calculate e to that value:        ");
// 	scanf("%d", &n);
	
// 	if (n<0){
// 		printf("please enter non-negative number for n" );
// 	}
// 	for(i=1; i<=n; i++){
// 		for (j=1; j<=i; j++){
// 			f=f*j;
// 		}
// 		e= (e+(float)1/f);
// 		f=1.0;
// 	}
// printf("your calculated value of e is:      %.30f\n", e);












	// This program calculates the length of a string entered by user


	// printf("enter a sentence and I will tell you how long it is!!!!:          ");

	// int len=0;

	// while(getchar()!='\n'){
	// 	len++;
	// }
	// printf("Your entered thing is %d characters long!!  \n", len);	



















	// This program converts a telephone number with words into just a numberic telephone number

// 	char n[20];
// 	int i=0;
// 	printf("Enter capital alphabetic phone number:        ");
// 	scanf("%s", n);

// 	while(n[i]!='\0') {
// 		switch(n[i]) {

// 			case 'A':
// 			case 'B':
// 			case 'C':
// 				printf("2");
// 				break;
// 			case 'D':
// 			case 'E':
// 			case 'F':
// 				printf("3");
// 				break;
// 			case 'G':
// 			case 'H':
// 			case 'I':
// 				printf("4");
// 				break;
// 			case 'J':
// 			case 'K':
// 			case 'L':
// 				printf("5");
// 				break;
// 			case 'M':
// 			case 'N':
// 			case 'O':
// 				printf("6");
// 				break;
// 			case 'P':
// 			case 'Q':
// 			case 'R':
// 			case 'S':
// 				printf("7");
// 				break;
// 			case 'T':
// 			case 'U':
// 			case 'V':
// 				printf("8");
// 				break;
// 			case 'W':
// 			case 'X':
// 			case 'Y':
// 			case 'Z':
// 				printf("9");
// 				break;

// 			default:
// 				printf("%c", n[i]);
// 		}
// 	i++;
// }

// printf("\n");















	// // This program counts the number of vowels in a sentence

	// char sentence[2000];
	// int vowelcount=0;
	// int i=0;

	// printf("Type a sentence and press enter when finished.  I will tell you how many vowels there are.  Type a period to terminate:        ");
	// gets(sentence);

	// while(sentence[i]!='\0'){
	// 	switch(sentence[i]) {

	// 		case 'A':
	// 		case 'a':
	// 		case 'E':
	// 		case 'e':
	// 		case 'I':
	// 		case 'i':
	// 		case 'O':
	// 		case 'o':
	// 		case 'U':
	// 		case 'u':
	// 			vowelcount+=1;
	// 			break;
	// 		default:
	// 			printf("");
	// 	}
	// 	i+=1;
	//  }
	// printf("Your sentence has %d vowels!!\n", vowelcount);






	//  This program calculates the factorial of a number inputed by user


	// int num, i, fact;
	// i=0;
	// fact=1;

	// printf("Enter a number and I will calculate factorial of it:        ");
	// scanf("%d", &num);

	// while(num!=0){
	// 	fact=fact*num;
	// 	num--;
	// }

	// printf("Your result is %d\n", fact);












	// This program calculates value of word inputted by user for scrabble game


	// char ch='n';
	// int score=0;
	// int end;

	// printf("Enter a sentence and I will return the scrabble score:       ");
	


	// while (ch!='\n'){
	// 	ch=getchar();
	// 	ch=toupper(ch);
	// 	switch(ch){
	// 		case 'A':
	// 		case 'E':
	// 		case 'I':
	// 		case 'L':
	// 		case 'N':
	// 		case 'O':
	// 		case 'R':
	// 		case 'S':
	// 		case 'T':
	// 		case 'U':
	// 			score++;
	// 			break;
	// 		case 'D':
	// 		case 'G':
	// 			score=score+2;
	// 			break;
	// 		case 'B':
	// 		case 'C':
	// 		case 'M':
	// 		case 'P':
	// 			score=score+3;
	// 			break;
	// 		case 'F':
	// 		case 'V':
	// 		case 'H':
	// 		case 'Y':
	// 		case 'W':
	// 			score=score+4;
	// 			break;
	// 		case 'K':
	// 			score=score+5;
	// 			break;
	// 		case 'J':
	// 		case 'X':
	// 			score=score+8;
	// 			break;
	// 		case 'Q':
	// 		case 'Z':
	// 			score=score+10;
	// 			break;
	// 		default:
	// 			printf("");
	// 	}
	// }
	// printf("Score:  %d\n", score);
















	// This program reverses input of numbers by user

	// int a[N], i;
	// printf("Enter %d numbers:      ", N);

	// for(i=0; i<N; i++){
	// 	scanf("%d", &a[i]);
	// }
	// printf("In reverse order:  ");
	// for(i=N-1; i>=0; i--){
	// 	printf("%d, ", a[i]);
	// }
	// printf("\n");







				









	









	







	


	




















	}
