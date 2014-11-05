 //  tictac.c   This program plays the game of tictac.  the computer doesn't really do a good job of guessing where to go


#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <time.h>


void draw_board(char (*board)[3]);
void comp_move(char (*board)[3], int(*i));
void user_move(char (*board)[3], int(*i));
void comp_first(char (*board)[3], int (*status), int(*i));
void user_first(char (*board)[3], int (*status), int(*i));
void check_win(char (*board)[3], int(*status), int(*i));



int main(){

char usersymb, compsymb;
int guess, num, status, i;

status=1;
i=0;


// THIS DECLARES THE BOARD AS 
char board[3][3];
	for(int x=0; x<3; x++){
		for(int y=0; y<3; y++){
			board[x][y]='_';
		}
	}
	// draw_board(board);


	// board[2][2]='?';
	// draw_board(board);
	

	printf("Welcome to Tic Tac Toe.  Would you like to play with x's or o's?  (Enter x/o):       ");
	scanf("%c", &usersymb);
	while(usersymb !='x' && usersymb !='o'){
		printf("Invalid response.  Please enter lowercase x or o:  ");
		scanf("%c", &usersymb);
	}
	if(usersymb=='x'){compsymb='o';}
		else{compsymb='x';}
	printf("Now we will see who gets to make the first move.  Pick 1 or 2 and I will randomly pick an answer:     ");
	scanf("%d", &guess);


	// This picks a random number between 1 and 2

	srand(time(NULL));
	num = rand()%2 +1;

	if(guess==num){
		printf("You guessed correctly!  You get to go first.  \n");
	}
	else{printf("You didn't guess correctly.  I get to go first.. hahahh  \n");}

	draw_board(board);



	if(guess==num){user_first(board, &status, &i);}
	else{comp_first(board);}
}










void comp_first(char (*board)[3]){
	printf("TESTTEST   hello world basd  \n");
}






void user_first(char (*board)[3], int (*status), int(*i)){
	while(*status==1 && *i<9){
		user_move(board, i);
		draw_board(board);
		comp_move(board, i);
		draw_board(board);
		check_win(board, status, i);
		printf("s\n  %d   \n", *status);
		*status=0;
	}
}






void comp_move(char(*board)[3], int(*i)){
	srand(time(NULL));
	i++;
}


void user_move(char(*board)[3], int(*i)){
	printf("TEST hahahah");
	printf("Please enter where you would like to move on board, entering #row and #column, separated by space, no commas or anything:     ");
	scanf("%d  %d", )
	i++;




}





void check_win(char (*board)[3], int (*status), int(*i)){
	printf("TEST heasdga asdgkl;alksdg ");
	status=0;
}





	











// ---------------------------------------------------------------------------------------------------------







void draw_board(char (*board)[3]){
	printf("\n");
	printf("\n This is what the board looks like now:      \n\n\n\n");

	printf("\n\t  | \t   | \t");
	printf("\n____%c_____|____%c___|____%c___", board[0][0], board[0][1], board[0][2]);
	printf("\n\t  | \t   | \t");
	printf("\n____%c_____|____%c___|____%c___", board[1][0], board[1][1], board[1][2]);
	printf("\n\t  | \t   | \t");
	printf("\n    %c     |    %c   |    %c  \n", board[2][0], board[2][1], board[2][2]);
	printf("\n\n\n\n\n");
}

































