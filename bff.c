//  bff.c  A program to convert inputed language into BFF language..


#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define N 1000


int main(){

int i=0;



	char sentence[N];
	memset(sentence, '\0', N);

	printf("enter your sentence, with period marking end, then press enter:      ");
	gets(sentence);



	while(sentence[i]!='\0'){
		if     (sentence[i]=='a' || sentence[i]=='A')  {sentence[i]='4';}
		else if(sentence[i]=='b' || sentence[i]=='B')  {sentence[i]='8';}
		else if(sentence[i]=='e' || sentence[i]=='E')  {sentence[i]='3';}
		else if(sentence[i]=='i' || sentence[i]=='I')  {sentence[i]='1';}
		else if(sentence[i]=='o' || sentence[i]=='O')  {sentence[i]='0';}
		else if(sentence[i]=='s' || sentence[i]=='S')  {sentence[i]='5';}
		i++;
	}

	printf("%s!!!!!!!!!!!!!!", sentence);
	
	




	


	printf("\n");
// }









}