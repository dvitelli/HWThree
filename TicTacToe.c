/*
 ============================================================================
 Name        : TicTacToe.c
 Author      : Dominick Vitelli
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {

	char board[3][3];
	int win = 0, row, column;

	for(int i = 0; i < 3; i++){
		for(int j = 0; j < 3; j++){
			board[i][j] = '*';
		}
	}

	displayBoard(board);

	printf("\nPlayer One - Select your row and column on the board: ");
	fflush(stdout);
	scanf("%d %d", &row, &column);
	//check to see if they won if so win = 1 (display player one won)
	// if not show board
	//player two selects move
	//check to see if they won if so win = 1 (display player two won)
	//if not loop
	win = 1;


	return EXIT_SUCCESS;
}

void displayBoard(char board[3][3]){

	int counter = 0;
	for (int i =0; i < 3; i++){
			for(int j = 0; j < 3; j++){

				if (counter == 3 || counter == 6){
					printf("\n");
				}

				printf("%c", board[i][j]);
				counter++;

			}

			return;
	}

}
