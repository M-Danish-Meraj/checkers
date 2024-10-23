#include <stdio.h>

#define EMPTY ' '
#define BLACK 'B'
#define RED 'R'

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
            if (board[i][j] == BLACK) {
                printf("\033[34m%c\033[0m ", board[i][j]); // Blue for 'B'
            } else if (board[i][j] == RED) {
                printf("\033[31m%c\033[0m ", board[i][j]); // Red for 'R'
            } else {
                printf("%c ", board[i][j]);  // Print empty space
            }
        }
        printf("\n");  // Move to the next row
    }
}

int isValidMove(char board[8][8], int startX, int startY, int endX, int endY, char player) {
    // Check if the move is within bounds and to an empty space
    if (endX < 0 || endX >= 8 || endY < 0 || endY >= 8 || board[endX][endY] != EMPTY) {
        return 0; // Invalid move
    }
    
    // Check if the move is diagonal
    if (abs(endX - startX) == 1 && abs(endY - startY) == 1) {
        return 1; // Simple move
    }
    
    // Check for capturing
    if (abs(endX - startX) == 2 && abs(endY - startY) == 2) {
        int midX = (startX + endX) / 2;
        int midY = (startY + endY) / 2;
        char opponent = (player == RED) ? BLACK : RED;
        
        if (board[midX][midY] == opponent) {
            return 1; // Valid capture move
        }
    }
    
    return 0; // Invalid move
}

void makeMove(char board[8][8], int startX, int startY, int endX, int endY) {
    // Perform the move
    board[endX][endY] = board[startX][startY]; // Move the piece
    board[startX][startY] = EMPTY; // Clear the old position
    
    // Check for capture
    if (abs(endX - startX) == 2) {
        int midX = (startX + endX) / 2;
        int midY = (startY + endY) / 2;
        board[midX][midY] = EMPTY; // Remove the captured piece
    }
}

int main() {
    char board[8][8] = {
        {' ', BLACK, ' ', BLACK, ' ', BLACK, ' ', BLACK},
        {BLACK, ' ', BLACK, ' ', BLACK, ' ', BLACK, ' '},
        {' ', BLACK, ' ', BLACK, ' ', BLACK, ' ', BLACK},
        {' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '},
        {' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '},
        {'R', ' ', 'R', ' ', 'R', ' ', 'R', ' '},
        {' ', RED, ' ', RED, ' ', RED, ' ', RED},
        {RED, ' ', RED, ' ', RED, ' ', RED, ' '}
    };
    
    int currentPlayer = 0; // 0 for RED, 1 for BLACK
    char playerPieces[2] = {RED, BLACK};

    while (1) {
        boardcall(board); // Display the board
        int startX, startY, endX, endY;
        
        // Ask for the player's move
        printf("Player %c, enter your move (startX startY endX endY): ", playerPieces[currentPlayer]);
        scanf("%d %d %d %d", &startX, &startY, &endX, &endY);
        
        // Validate and make the move
        if (isValidMove(board, startX, startY, endX, endY, playerPieces[currentPlayer])) {
            makeMove(board, startX, startY, endX, endY);
            currentPlayer = 1 - currentPlayer; // Switch players
        } else {
            printf("Invalid move. Try again.\n");
        }
    }

    return 0;
}


