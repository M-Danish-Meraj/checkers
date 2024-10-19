#include <stdio.h>
int main()
{
      printf(" A B C D E F G H\n");
    for(int row=0;row<8;row++)
    {
        printf("%d ",row+1);
            for (int  col = 0; col < 8; col++)
                {
            if(row <= 2 && (row + col) % 2 == 1)
                printf("\033[33mY\033[0m"); 
            else if(row >= 5 && (row + col) % 2 == 1)
                printf("\033[31m\033[0m");
            else {
                printf("  ");}
        
                }
         printf("\n");
    }
    return 0;
}



// #include <stdio.h>

// int main() {
//     printf("  A B C D E F G H\n"); // Print column labels
//     for (int row = 0; row < 8; row++) {
//         printf("%d ", row + 1); // Print row number
//         for (int col = 0; col < 8; col++) {
//             // Print 'B' for black pieces on alternating dark squares in top 3 rows
//             if (row <= 2 && (row + col) % 2 == 1) {
//                 printf("B ");
//             }
//             // Print 'W' for white pieces on alternating dark squares in bottom 3 rows
//             else if (row >= 5 && (row + col) % 2 == 1) {
//                 printf("W ");
//             }
//             // Print an empty square
//             else {
//                 printf("  ");
//             }
//         }
//         printf("\n"); // Move to the next line after printing all columns in a row
//     }
//     return 0;
// }

    // #include <stdio.h>
    // #define size 8
    // int main()
    // {
    //     for(int i=0;i<size;i++){
    //         if(i%2==0){
    //             printf("%c%c",255); 
    //         }
    //         for(int j=0;j<size/2;j++){
    //         printf("%c%c",219,219);  
    //         printf("%c%c",255);    
    //         }
    //     }
    //     printf("\n");
    //     return 0;
    // }
#include <stdio.h>
int main() {
    // Print some text in different colors
    printf("\033[31mThis is red text.\033[0m\n");       // Red text
    printf("\033[32mThis is green text.\033[0m\n");     // Green text
    printf("\033[33mThis is yellow text.\033[0m\n");    // Yellow text
    printf("\033[34mThis is blue text.\033[0m\n");      // Blue text
    printf("\033[35mThis is magenta text.\033[0m\n");   // Magenta text
    printf("\033[36mThis is cyan text.\033[0m\n");      // Cyan text
    printf("\033[37mThis is white text.\033[0m\n");     // White text
    printf("\033[30mThis is black text.\033[0m\n");     // Black text

    // Resetting to default text color
    printf("This is default text.\n");

    return 0;
}
// chatgpt
// #include <stdio.h>
// #define SIZE 8
// // Function to initialize the board
// void initializeBoard(char board[SIZE][SIZE]) {
//     for (int i = 0; i < SIZE; i++) {
//         for (int j = 0; j < SIZE; j++) {
//             if ((i + j) % 2 == 0) {
//                 board[i][j] = ' '; // Empty squares
//             } else {
//                 if (i < 3) {
//                     board[i][j] = 'B'; // Black pieces
//                 } else if (i > 4) {
//                     board[i][j] = 'R'; // Red pieces
//                 } else {
//                     board[i][j] = ' '; // Empty squares
//                 }
//             }
//         }
//     }
// }

// // Function to display the board
// void displayBoard(char board[SIZE][SIZE]) {
//     printf("  A B C D E F G H\n");
//     for (int i = 0; i < SIZE; i++) {
//         printf("%d ", i + 1);
//         for (int j = 0; j < SIZE; j++) {
//             printf("%c ", board[i][j]);
//         }
//         printf("\n");
//     }
// }

// // Function to check if a move is valid
// int isValidMove(char board[SIZE][SIZE], int startX, int startY, int endX, int endY) {
//     // Check if the end position is within bounds
//     if (endX < 0 || endX >= SIZE || endY < 0 || endY >= SIZE) {
//         return 0; // Invalid move
//     }

//     // Check if the destination square is empty and the move is diagonal
//     if (board[endX][endY] == ' ' && ((endX - startX) == 1 || (endX - startX) == -1) && 
//         ((endY - startY) == 1 || (endY - startY) == -1)) {
//         return 1; // Valid move
//     }

//     return 0; // Invalid move
// }

// // Function to make a move
// void makeMove(char board[SIZE][SIZE], int startX, int startY, int endX, int endY) {
//     board[endX][endY] = board[startX][startY]; // Move the piece
//     board[startX][startY] = ' '; // Empty the original position
// }

// // Main function
// int main() {
//     char board[SIZE][SIZE];
//     initializeBoard(board);
//     displayBoard(board);

//     int startX, startY, endX, endY;
//     char startCol, endCol;

//     while (1) {
//         printf("Enter your move (e.g., A1 B2): ");
//         scanf(" %c%d %c%d", &startCol, &startX, &endCol, &endX);

//         // Convert from chess notation to array indices
//         startX -= 1;
//         endX -= 1;
//         startY = startCol - 'A';
//         endY = endCol - 'A';

//         if (isValidMove(board, startX, startY, endX, endY)) {
//             makeMove(board, startX, startY, endX, endY);
//             displayBoard(board);
//         } else {
//             printf("Invalid move. Try again.\n");
//         }
//     }

//     return 0;
// }


