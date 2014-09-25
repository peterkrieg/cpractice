// Interest.c  this program calculates the value owed of $100 for number of years inputted by user, and interest rate



#include <stdio.h>
#include "power.c"


int main(){


	float interest;
	int years;

	printf("Enter interest rate, as percentage:     ");
	scanf("%f", &interest);
	printf("Enter number of years:    ");
	scanf("%d", &years);


	// printf("%f", interest/100);


	printf("Years        ");
	// Prints first row, the title of the table output
	for (float i=0; i<5; i++){
		printf("%d%%             ", (int)(interest+i) );
	}
	printf("\n");


	// Now will print the value of money after years, at given interest rate
	float values[5];
	for(int j=1; j<=years; j++){
	
		printf("%d         ", j);
		for(int i=0; i<5; i++){
			values[i]= 100*power(1+((interest+i)/100), j);
			printf("%.3f        ",        values[i]);
		}
		printf("\n");
	}
}




