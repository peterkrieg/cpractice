// This program will add fractions, and then reduce to simplest form.  can't actually figure out how to get it in simplest form.



#include <stdio.h>


int main(){


	int numfrac;
	printf("Enter number of fractions you would like to add:   ");
	scanf("%d", &numfrac);

	int numerator[numfrac];
	int denom[numfrac];
	int numeratorsum=0;
	int denomsum=0;

	for(int i=1; i<=numfrac; i++){
		printf("Enter fraction #%d (ie, 4/7):       ", i);
		scanf("%d/%d", &numerator[i],  &denom[i]);

		numeratorsum=  numeratorsum+ numerator[i];
		denomsum = denomsum+denom[i];

		printf("numerator sum:  %d  \ndenominator sum:  %d  \n", numeratorsum, denomsum);


	}



	if(numeratorsum%denomsum==0){
		numeratorsum=(numeratorsum/denomsum);
		denomsum=1;
	}
	else if (numeratorsum%denomsum!=0){
		numeratorsum=numeratorsum/(numeratorsum%denomsum);
		denomsum=denomsum/(numeratorsum%denomsum);
	}

	printf("remainder is:  %d", (numeratorsum%denomsum));

	printf("reduced fraction is:   %d/%d \n", numeratorsum, denomsum );


	return 0;

}










