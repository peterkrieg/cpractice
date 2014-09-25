// This program will have the user guess a random number between 1 and 100

#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>
#include <math.h>

#define MAXNUM 100
#define MINNUM 1


int game(){
	int num;
	int guesscorrect;
	int guess;
	guesscorrect=0;
	num=(rand()%100+1);



	while(guesscorrect==0){

		printf("Guess a number between 1 and 100:       ");
		scanf("%d", &guess);
		if(guess==num){
			printf("congrats!  you guessed correctly, the number was %d  \n", num);
			guesscorrect=1;
		}

		else if (guess<num)    {printf("Your guess was too low.  try again\n"); }
		else   {  printf("your guess was too high.  try again.\n");  }


	}	


	return 0;





}
















int main(){

	int playagain=0;
	char command;


	while(playagain==0){
		game();
		printf("would you like to play again?  enter y for yes");
		scanf("%c", &command);
		if(command!='y'){playagain=0; break;}


	}


game();


}
