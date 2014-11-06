#include <stdio.h>

void sayHello(char enthusiasm);


int main(void){
	sayHello('a');
}



void sayHello(char enthusiasm){
	int x = 2;
	int num;
	int z;


	float y = 3.123456;
	printf("hello world%c \n",  enthusiasm);
	printf("the value of x is %d\n", x);
	printf("the value of y is %.6f\n", y);


  printf("please enter a number: ");
	scanf("%d", &num);
	printf("you entered %d\n", num);


	printf("please enter value from 1 to 3:  ");
	scanf("%d", &z);
	switch(z){
		case 1:
			printf("you chose 1");
			break;
		case 2: 
			printf("you chose 2");
			break;
		case 3:
			printf("you chose 3");
			break;
	}


}









