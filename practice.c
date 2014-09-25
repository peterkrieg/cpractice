#include <stdio.h>


int main()
{
	





	// printf("hello world\n");


	// float fahr; 
	// float celsius;
	// float lower, upper, step;
	// lower=0;
	// upper=300;
	// step=20;

	// fahr = lower;  
	// printf("t\n");   
	// while (fahr <= upper) {         
	// 	celsius = 5 * (fahr-32) / 9;         
	// 	printf("%12.0f%12.2f\n", fahr, celsius);         
	// 	fahr = fahr + step;     
	// } 




	// float fahr;
	// float celsius;
	// // celsius = ((5.0/9.0) * (fahr-32)); 
	// for (fahr=300; fahr>=0; fahr=fahr-20)
	// 	printf("%10.0f  %10.2f \n", fahr, (5.0/9.0)*(fahr-32));

	// int c;
	// 	while ((c=getchar() ) != EOF)
	// 		putchar(c);




	
	
	// char* c;
	
	// printf("ENTER --\n");
	// gets(c);
	// int nc=0;
	
	// while (c[nc] != '\0') {
	// 	nc++;
	// }
	// printf("%d\n", nc );



	// double nc;        
	// for (nc = 0; getchar() != EOF; ++nc);        
	// printf("%.0f\n", nc);

	// float a, b, c;
	// a=444;
	// b=5;
	// c=a+b;

	// printf("%.3f + %.0f = %.1f\n", a, b, c);




	// float a, b, c, d;
 //    printf("Enter the first value:")
 //    scanf("%f", &a);
 //    printf("Enter the second value:");
 //    scanf("%f", &b);
 //    printf("Enter the third value:");
 //    scanf("%f", &c);
 //    d = a*b*c;
 //    printf("%.2f * %.2f *%.2f= %.0f\n", a, b, c, d);
 //    return 0;








 //    int b, i;
 //    i=0;
 //    while (i<=3){
	//     printf("Enter a value:");
	//     scanf("%d", &b);
	//     if (b < 0)
	//         printf("The value is negative\n");
	//     else if (b>0)
	//     	printf("POSITIVE NUMBER!!!!\n");
	//     else
	//     	printf("zero!!! 00000 \n");
	//     i++;
	// }
	// return 0;




	// int b;
	// printf("guess integer between 1 and 10\n");
	// scanf("%d", &b);
	// if (b==2 || b==4)
	// 	printf("WOW!!!! you win!\n");
	// else
	// 	printf("you lose..\n");



	// int a;
	// #define STARTTEMP 0
	// #define STEP 10
	// a=STARTTEMP;

 //    printf("Fahrenheit to Celsius\n");
 //    while (a <= 100)
 //    {
 //        printf("%4d degrees F = %4d degrees C\n",
 //            a, (a - 32) * 5 / 9);
 //        a = a + STEP;


	// int a[5];
 //    int i;

 //    for (i=0; i<5; i++)
 //        a[i] = i;
 //    for (i=0; i<5; i++)
 //        printf("a[%d] = %d\n", i, a[i]);

printf("whattt\n");

}























// -------------------------------------------------------------------------------------------------





// #include <stdio.h>

// #define MAX 10

// int a[MAX];
// int rand_seed=10;

// /* from K&R
//    - returns random number between 0 and 32767.*/
// int rand()
// {
//     rand_seed = rand_seed * 1103515245 +12345;
//     return (unsigned int)(rand_seed / 65536) % 32768;
// }






// int main()
// {
//     int i,t,x,y;

//     /* fill array */
//     for (i=0; i < MAX; i++)
//     {
//         a[i]=rand();
//         printf("%d\n",a[i]);
//     }

//     /* bubble sort the array */
// for (x=0; x < MAX-1; x++)
//     for (y=0; y < MAX-x-1; y++)
//         if (a[y] > a[y+1])
//         {
//             t=a[y];
//             a[y]=a[y+1];
//             a[y+1]=t;
//         }
// /* print sorted array */
// printf("--------------------\n");
// for (i=0; i < MAX; i++)
// printf("%d\n",a[i]);

//     return 0;
// }




















// #include <stdio.h>




// #include <stdio.h>
// #include <string.h>

// void main()
// {
//     char s[1000];
//     int count=0;
//      while (gets(s))
//         count += strlen(s);
//     printf("%d\n",count);
// }





























#include <stdio.h>

int area() {
	int r;
	int pi = 3;
	int d;
	printf("Please enter radius of circle.  Type -1 if you want to enter a diameter instead.\n");
	scanf("%d", &r);
	if (r==-1)
		{printf("Enter diameter here\n");
		scanf("%d", &d);
		return(pi*d);}
	return (pi*(r*r));
}


int main()
{
	int a = area();
	printf("%d", a);
	return 0;
}





















#include <stdio.h>

int area() {
	int r;
	int pi = 3;
	int d;
	printf("Please enter radius of circle.  Type -1 if you want to enter a diameter instead.\n");
	scanf("%d", &r);
	if (r==-1)
		{printf("Enter diameter here\n");
		scanf("%d", &d);
		return(pi*d);}
		return (pi*(r*r));
}

int main(){
	int a = area();
	printf("Your area of circle is  %d\n", a);
	return 0;
}












































