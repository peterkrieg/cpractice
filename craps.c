// craps.c  This program will simulate the game of craps


#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>
#include <math.h>


int score=0;
int lost=0;
int won=0;
int point=0;
int roll=0;

int roll_dice ()
{

	int dice1 = (rand() % 6) + 1;
	int dice2 = (rand() % 6) + 1;

	printf("%d, %d\n", dice1,dice2);
	return dice1+dice2;

}

void play_game()
{
	int lost = 0;
	int won = 0;
	roll = roll_dice();
	printf("%d\n", roll);
	printf("\nroll: %d\n", roll);
	if (roll == 7 || roll== 11) {
	 	printf("You won!! with a roll of:   %d  \n", roll);
	}
	else if (roll == 2 || roll == 3 || roll == 12) {
		printf("You lost.. with a roll of:   %d", roll);
	}
	else {
		printf("Game will continue, you rolled a %d which is now your point   \n", roll);      
		point = roll;
	}
	
	printf("Game will now continue\n");
		// point = roll_dice();
	
	while(lost == 0 && won == 0){
		roll = roll_dice();
		if(roll == 7){
			printf("YOU LOSE becuase you rolled %d\n", roll);
			lost = 1;
		}
		else if(roll == point){
			printf("YOu WIN!!   you rolled a %d  \n", roll);
			won = 1;
		}
		else {printf("you rolled a %d  \n", roll);}
	}
}













int main(){

 //    for(int i=0; i<20; i++){

	//   roll_dice();
	//   roll_dice();

	//   int result= 0;
	//   result = roll_dice();

	//   printf("%d \n", result);
	// }

	play_game();

	// printf("ASDGASDGASDG\n");

	// play_game();

	// printf("ASDGASDGASDG\n");

	// play_game();

	// printf("ASDGASDGASDG\n");

	// play_game();


	// printf("ASDGASDGASDG\n");

	// play_game();

}	


// play_game();





