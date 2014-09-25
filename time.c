#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <time.h>

// Time.c  this program plays around with time functions of C, and outputting the time in different formats.  




int main(){


	time_t seconds;
	seconds=time(NULL);
	printf("%ld\n", seconds);

}