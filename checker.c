#include <stdio.h>

void boardcall(char board[8][8]) {
    // Print column indices
    printf("  ");
    for (int i = 0; i < 8; i++) {
        printf("%d ", i);  // Print column numbers
    }
    printf("\n");

    // Print the board with row indices
    for (int i = 0; i < 8; i++) {
        printf("%d ", i);  // Print row number
        for (int j = 0; j < 8; j++) {
            if (board[i][j] == 'B') {
                printf("\033[34m%c\033[0m ", board[i][j]); // Blue for 'B'
            } else if (board[i][j] == 'R') {
                printf("\033[31m%c\033[0m ", board[i][j]); // Red for 'R'
            } else {
                printf("%c ", board[i][j]);  // Print empty space
            }
        }
        printf("\n");  // Move to the next row
    }
}

int main() {
    char board[8][8] = {
        {' ', 'B', ' ', 'B', ' ', 'B', ' ', 'B'},
        {'B', ' ', 'B', ' ', 'B', ' ', 'B', ' '},
        {' ', 'B', ' ', 'B', ' ', 'B', ' ', 'B'},
        {' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '},
        {' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '},
        {'R', ' ', 'R', ' ', 'R', ' ', 'R', ' '},
        {' ', 'R', ' ', 'R', ' ', 'R', ' ', 'R'},
        {'R', ' ', 'R', ' ', 'R', ' ', 'R', ' '}
    };

    boardcall(board); // Call the function to display the board
    return 0;
}


