#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

void drawBoard(char boardPosition[]);

void userPosition(char position, char symbol, char boardPosition[]);

bool checkWin(char boardPosition[]);

int main() {
    char boardPosition[] = {'1', '2', '3', '4', '5', '6', '7', '8', '9'};
    bool status = false;
    printf("Welcome to the game. \n");
    while (true) {
        drawBoard(boardPosition);
        printf("Player one choose position. \n");
        char playerOnePosition;
        scanf(" %c", &playerOnePosition);
        userPosition(playerOnePosition, 'X', boardPosition);
        status = checkWin(boardPosition);
        if (status == true) {
            drawBoard(boardPosition);
            break;
        }

        drawBoard(boardPosition);
        printf("Player two choose position. \n");
        char playerTwoPosition;
        // scanf skip scanf
        scanf(" %c", &playerTwoPosition);
        userPosition(playerTwoPosition, 'O', boardPosition);
        status = checkWin(boardPosition);
        if (status == true) {
            drawBoard(boardPosition);
            break;
        }

    }


    return 0;
}


void drawBoard(char boardPosition[]) {
    printf("%c | %c | %c\n", boardPosition[0], boardPosition[1], boardPosition[2]);
    printf("--+---+--\n");
    printf("%c | %c | %c\n", boardPosition[3], boardPosition[4], boardPosition[5]);
    printf("--+---+--\n");
    printf("%c | %c | %c\n", boardPosition[6], boardPosition[7], boardPosition[8]);
}

void userPosition(char position, char symbol, char boardPosition[]) {
    if (position == '1') {
        boardPosition[0] = symbol;
    } else if (position == '2') {
        boardPosition[1] = symbol;
    } else if (position == '3') {
        boardPosition[2] = symbol;
    } else if (position == '4') {
        boardPosition[3] = symbol;
    } else if (position == '5') {
        boardPosition[4] = symbol;
    } else if (position == '6') {
        boardPosition[5] = symbol;
    } else if (position == '7') {
        boardPosition[6] = symbol;
    } else if (position == '8') {
        boardPosition[7] = symbol;
    } else if (position == '9') {
        boardPosition[8] = symbol;
    }
}

bool checkWin(char boardPosition[]) {
    bool status = false;
    // Horizontal
    if (boardPosition[0] == boardPosition[1] &&
        boardPosition[1] == boardPosition[2]) {
        status = true;
    } else if (boardPosition[3] == boardPosition[4] &&
               boardPosition[4] == boardPosition[5]) {
        status = true;
    } else if (boardPosition[6] == boardPosition[7] &&
               boardPosition[7] == boardPosition[8]) {
        status = true;
    }
        // Vertical
    else if (boardPosition[0] == boardPosition[3] &&
             boardPosition[3] == boardPosition[6]) {
        status = true;
    } else if (boardPosition[1] == boardPosition[4] &&
               boardPosition[4] == boardPosition[7]) {
        status = true;
    } else if (boardPosition[2] == boardPosition[5] &&
               boardPosition[5] == boardPosition[8]) {
        status = true;
    }
        // Cross
    else if (boardPosition[0] == boardPosition[4] &&
             boardPosition[4] == boardPosition[8]) {
        status = true;
    } else if (boardPosition[2] == boardPosition[4] &&
               boardPosition[4] == boardPosition[6]) {
        status = true;
    }

    return status;
}


