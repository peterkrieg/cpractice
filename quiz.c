// quiz.c      This program quizzes the user on multiplication tables 


#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <time.h>

int min, max, num1, num2, time_current, time_resp, resp, score, answ, highscore;



int main(){



	highscore=0;
	srand(time(NULL));

	
	printf("");






	while(1){
		printf("Welcome to the multiplication game.  You can't ever enter 0 for min or max value \n");


		// START OF NEW GAME FUNCTION

		printf("What would you like minimum value of mult table to be:        ");
		scanf("%d", &min);
		printf("What would you like the maxmimum value of mult table to be:   ");
		scanf("%d", &max);


		score=0;
		for(int i=0; i<9; i++){
			if (min==max) {num1=min; num2=min;}
			else{
				num1 = (rand()%(1+max-min)+min);
				num2 = (rand()%(1+max-min)+min);
			}
			printf("%d X %d   \n ", num1, num2);
			answ=0;
			while(answ==0){
				time_current=time(NULL);
				scanf("%d", &answ);
				time_resp = time(NULL)-time_current;
				printf("  \n  TIME RESP IS    %d      \n", time_resp);
			}

			if(answ!=num1*num2){
				score=score+0;
				printf("INCORRECT..  \n");
			}
			else{score= score+(10-time_resp + 1);}
		}
		printf("Your score was %d.  Your high score is %d   \n", score, highscore);
		if (score>highscore){highscore=score; printf("NEW HIGH SCORE!!!\n");}

	}







}