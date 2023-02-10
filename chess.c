#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>


bool isValidMove (int x1, int x2, int y1, int y2, int board[8][8]) ;

int main () {
	printf("Welcome to Terminal Chess!\n");
	printf("Initializing Board...\n")	;
	int board [8][8] = { {5, 4, 3, 1, 2, 3, 4, 5}
		           , {6, 6, 6, 6, 6, 6, 6, 6}
				 	     , {0, 0, 0, 0, 0, 0, 0, 0}
					     , {0, 0, 0, 0, 0, 0, 0, 0}
				             , {0, 0, 0, 0, 0, 0, 0, 0} 
				             , {0, 0, 0, 0, 0, 0, 0, 0}
				             , {6, 6, 6, 6, 6, 6, 6, 6}
				             , {5, 4, 3, 1, 2, 3, 4, 5}
				             } ;
  char buf[100];
  bool whitesMove = true;
	printf("Board Initialized!\n") ;
	
// 	showBoard(board);


├ ┤ ┬ ┴
 
─ │ ┼
 
 might need these...
 
 ╟ ╢ ╧ ╤
 
*/
void showBoard (int board[8][8]) {


bool isValidMove (int x1, int x2, int y1, int y2, int board[8][8]) {
	if (board[x1][x2] == 0) {
		return false;
	} else if (board[x1][x2] == 1) { 
		if (abs(x1 - x2) <= 1 && abs(y1-y2) <= 1) {
			return true;
		}
		// king
	} else if (board[x1][x2] == 2) { 
		// queen
	} else if (board[x1][x2] == 3) { 
		// bishop
	} else if (board[x1][x2] == 4) { 
		// knight
	} else if (board[x1][x2] == 5) { 
		// Rook
	} else if (board[x1][x2] == 6) { // Pawn
		if (y1 - y2 == 1 && x1 == x2) { // forward one
			if (board[x1][y2] == 0) {
				return true;
			}
		} else if (y1 - y2 == 2 && x1 == x2) { // forward two
			if (board[x1][y2] == 0 && board[x1][y2+1] == 0) {
				return true;

			}
			flag = false;
//			printf(""); 
			switch (board[i][j]) {
				case 0: 
					printf(" ");
					break;
				case 1:
					printf("♔");
					break;
				case 2: 
					printf("♕");
					break;
				case 3: 
					printf("♗");
					break;
				case 4: 
					printf("♘");
					break;
				case 5: 
					printf("♙");
			}
		}

		printf("│\n") ;
		if (i < 7) {
			printf("├─┼─┼─┼─┼─┼─┼─┼─┤\n") ;
		}
	}
	printf("└─┴─┴─┴─┴─┴─┴─┴─┘\n");

}

int main () {
	printf("Welcome to Terminal Chess!\n");
	printf("Initializing Board...")	;
	int board [8][8] = { {5, 4, 3, 2, 1, 3, 4, 5}
				       , {6, 6, 6, 6, 6, 6, 6, 6}
				 	   , {0, 0, 0, 0, 0, 0, 0, 0}
					   , {0, 0, 0, 0, 0, 0, 0, 0}
				       , {0, 0, 0, 0, 0, 0, 0, 0} 
				       , {0, 0, 0, 0, 0, 0, 0, 0}
				       , {6, 6, 6, 6, 6, 6, 6, 6}
				       , {5, 4, 3, 2, 1, 3, 4, 5}
				       } ;
	printf("Board Initialized!") ;
	
	showBoard(board);
	
	// rest of game...
	
	printf("Terminating...") ;
}
