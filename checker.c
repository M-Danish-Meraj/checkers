#include <stdio.h>

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
           if (board[i][j]=='B')
           {
            printf("\033[34m%c\033[0m ", board[i][j]);
           }else if (board[i][j]=='R'){
            printf("\033[31m%c\033[0m ", board[i][j]);
           }
           else
            printf("%c ", board[i][j]);  // Print board element with a space
       
        }
        printf("\n");  // Move to the next row
    }


    return 0;
}


