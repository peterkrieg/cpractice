//  16 numbers  program



#include <stdio.h>

int main(){

	int num1, num2, num3, num4, num5, num6, num7, num8, num9, num10, num11, num12, num13, num14, num15, num16;


	printf("Enter 16 numbers, no commas or anything:     ");
	scanf("%d %d %d %d %d %d %d %d %d %d %d %d %d %d %d %d ", 
		  &num1, &num2, &num3, &num4, &num5, &num6, &num7, &num8, &num9, &num10, &num11, &num12, &num13, &num14, &num15, &num16);

	printf("I will produce a box of numbers now.   \n \n");

	printf("%d %d %d %d \n %d %d %d %d \n %d %d %d %d \n %d %d %d %d \n", 
			num1, num2, num3, num4, num5, num6, num7, num8, num9, num10, num11, num12, num13, num14, num15, num16);


	printf("Row sums:   %d %d %d %d", (num1+num2+num3+num4), (num5 + num6 +num7+num8), (num9 + num10+num11+num12), (num13 +num14 + num15 + num16));




	//  16 numbers to test here    14 5 9 8 3 11 19 10 4 7 9 21 43 15 10 8  

}