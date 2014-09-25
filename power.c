// Power.c  this program basically can do exponents


#include <stdio.h>
#include <stdlib.h>

float power (float num, int exponent);
void ask_for_number();




// commented out so that I can include functions from this
// int main(){

// int cont=0;
// char answer;
// char resp;
	

// 	ask_for_number();
// 	while(cont == 0) {
// 		printf("Would you like to enter another number (y/n):    ");
// 		scanf("%c", &resp);
// 		if(resp == 'y' || resp == 'Y') {
// 			cont=0;
// 			ask_for_number();
// 		}
// 		else {
// 			cont=1;
// 			break;
// 		}
// 	}
// 	return 0;	
// }







void ask_for_number()
{

	float num;
	int exponent;
	char waste;
	printf("Enter the number you would like to be raised to a power:       ");
	scanf("%f", &num);
	printf("Enter the exponent you'd like:      ");
	scanf("%d", &exponent);
	 scanf("%c", &waste);
	printf("The result is:   %f \n", power(num, exponent));
}





float power (float num, int exponent){
		float num2 = num;
		for (int i=1; i<exponent; i++){
			num=num*num2;
		}
		return num;
}