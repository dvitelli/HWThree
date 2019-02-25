/*
 ============================================================================
 Name        : TicTacToe.c
 Author      : Dominick Vitelli
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int win = 0;

int main(void) {

	char board[3][3];
	int row, column;

	for(int i = 0; i < 3; i++){
		for(int j = 0; j < 3; j++){
			board[i][j] = '*';
		}
	}

	printf("Hello and welcome to Dom's TicTacToe Extravaganza!");
	printf("\nRules: Each player chooses both a row and column between 0-2. The first player to match three in a row wins!");
	printf("\nGood luck and have fun!\n");


	while (win == 0){

	displayBoard(board);

	printf("\nPlayer One - Select your row and column on the board: ");
	fflush(stdout);
	scanf("%d %d", &row, &column);

	board[row][column] = 'X';
	winConditionOne(board);

	displayBoard(board);

	printf("\nPlayer Two - Select your row and column on the board: ");
	fflush(stdout);
	scanf("%d %d", &row, &column);
	board[row][column] = '0';
	winConditionTwo(board);

	}

	return EXIT_SUCCESS;
}

void displayBoard(char board[3][3]){

	int counter = 0;

	for (int k = 0; k < 3; k++){
			for(int l = 0; l < 3; l++){

				if (counter == 3 || counter == 6){
					printf("\n");
				}

				printf("%c", board[k][l]);
				counter++;

			}

	}

} void winConditionOne(char board[3][3]){

	if(board[0][0] == 'X' && board[1][0] == 'X' && board[2][0] == 'X'){

		
		printf("Player One wins!");
		exit(0);

	}if(board[0][0] == 'X' && board[0][1] == 'X' && board[0][2] == 'X'){

		
		printf("Player One wins!");
	
		exit(0);

	}if(board[1][0] == 'X' && board[1][1] == 'X' && board[1][2] == 'X'){

		printf("Player One wins!");
	
		exit(0);

	}if(board[2][0] == 'X' && board[2][1] == 'X' && board[2][2] == 'X'){


		printf("Player One wins!");
	
		exit(0);

	}if(board[0][1] == 'X' && board[1][1] == 'X' && board[2][1] == 'X'){

	
		printf("Player One wins!");
	
		exit(0);

	}if(board[0][2] == 'X' && board[1][2] == 'X' && board[2][2] == 'X'){

	
		printf("Player One wins!");
	
		exit(0);

	}if(board[0][0] == 'X' && board[1][1] == 'X' && board[2][2] == 'X'){

	
		printf("Player One wins!");
	
		exit(0);

	}if(board[2][0] == 'X' && board[1][1] == 'X' && board[0][2] == 'X'){

	
		printf("Player One wins!");
	
		exit(0);
	}
} void winConditionTwo(char board[3][3]){

	if(board[0][0] == '0' && board[1][0] == '0' && board[2][0] == '0'){

		
		printf("Player One wins!");
	
		exit(0);

	}if(board[0][0] == '0' && board[0][1] == '0' && board[0][2] == '0'){

	
		printf("Player One wins!");
	
		exit(0);

	}if(board[1][0] == '0' && board[1][1] == '0' && board[1][2] == '0'){

	
		printf("Player One wins!");
	
		exit(0);

	}if(board[2][0] == '0' && board[2][1] == '0' && board[2][2] == '0'){

	
		printf("Player One wins!");

		exit(0);

	}if(board[0][1] == '0' && board[1][1] == '0' && board[2][1] == '0'){

	
		printf("Player One wins!");

		exit(0);

	}if(board[0][2] == '0' && board[1][2] == '0' && board[2][2] == '0'){


		printf("Player One wins!");
	
		exit(0);

	}if(board[0][0] == '0' && board[1][1] == '0' && board[2][2] == '0'){

	
		printf("Player One wins!");

		exit(0);

	}if(board[2][0] == '0' && board[1][1] == '0' && board[0][2] == '0'){

	
		printf("Player One wins!");
	
		exit(0);
	}
}
