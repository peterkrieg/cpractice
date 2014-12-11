// collection.c   A collection of various c functions


#include <stdio.h>
#include <stdlib.h>

#define N 50













int main(){


int fib_numbers[N];

fib_numbers[0]=0;
fib_numbers[1]=1;

for(int i=2; i<N; i++){
	fib_numbers[i]=fib_numbers[i-1]+fib_numbers[i-2];
}
for (int i=0; i<N; i++){
	printf("%d \n", fib_numbers[i]);
}
printf("\n");


}




	





