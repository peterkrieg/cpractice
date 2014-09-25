// backwards.c  this program reverses order of numbers inputed by user

#include <stdio.h>


int main(){

	int N;
	printf("how many numbers would you like to enter?:      ");
	scanf("%d", &N);

	int numbers[N];



	

	for (int i=1; i<=N; i++){
		printf("enter number #%d:      ", i);
		scanf("%d", &numbers[i]);
	}


	printf("Now I will print the opposite order of numbers  \n");
	for(int i=N; i>=1; i--){
		printf("%d  \n", numbers[i]);
	}

	
s










}