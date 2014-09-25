#include <stdio.h>
#include <string.h>
#include <ctype.h>







int polynomial(int x){
	return(3*x*x*x*x*x + 2*x*x*x*x -5*x*x*x -x*x + 7*x -6);
}








int main(){
	int x;
	printf("Please enter a value for x:        ");
	scanf("%d", &x);
	printf("Your equation result is: %d \n", polynomial(x));
}

