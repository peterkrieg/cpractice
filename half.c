#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <time.h>


void divide(float num);



int main(){



	divide(3);


}




void divide(float num){



	for(int i=0; i<10; i++){
		num=num/2;
		printf("%f  \n", num);
	}	

}