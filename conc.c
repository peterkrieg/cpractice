//  concentraion.c  this program has computer give out 3 numbers, that user has to remember to say back out



#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <time.h>


int main(){

	srand(time(NULL));

	int num1, num2, num3, rem1, rem2, rem3, level, cont;
	long time_current;
	float time_display, time_increment;
	char resp, waste;

	level =0;
	cont=0;

	time_display = 3;
	time_increment  =  0.2;


	while(1){
		for(;;){
			num1 = rand()%100 + 1;
			num2 = rand()%100 + 1;
			num3 = rand()%100 + 1;

			printf("Remember the following three numbers in the exact sequence! \n");
			printf("%d  %d   %d  \n", num1, num2, num3);
			// Sets currenttime to 4 billion seconds or whatever since 1/0/1970
			time_current = time(NULL);

			while((time(NULL)-time_current) < time_display){
				// NOthing needed here
			}
			system("clear");

			printf("Now enter the numbers again!  No spaces, commas, just the numbers, in the same order:  \n");
			scanf("%d %d  %d", &rem1, &rem2, &rem3);

			if (rem1 != num1 || rem2!=num2 || rem3!=num3){
				printf("Sorry you lost! \n");
				break;
			}

			time_display= (time_display - time_increment);
			level++;
		}

		printf("You made it through %d levels!!  ", level);
		scanf("%c", &waste);
		// WASTE is a new line character (\n) which for some reason messes up program unless you store it as "wast"


		printf("Would you like to play again? (y/n):  ");
		
		scanf("%c", &resp);

		// printf("HERE IS THE VALUE OF  IT%cTTT", resp);
		if (resp!='y' && resp!='Y')
		{break;}
		else{level=0; time_display=3;}
	}
}