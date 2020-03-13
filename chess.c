#include <stdio.h>
#include <stdlib.h>

void boardoutput(char board[9][9])
{
    int i, j;
    for (i = 0; i < 9; i++) {
        for (j = 0; j < 9; j++) {
            board[i][j] = '\0';
        }
    }
}

void fillboard(char board[9][9])
{
    int i, j;
    for (i = 0; i < 9; j++) {
        if (j == 0) {
            board[0][j] = '8';
            board[1][j] = '7';
            board[2][j] = '6';
            board[3][j] = '5';
            board[4][j] = '4';
            board[5][j] = '3';
            board[6][j] = '2';
            board[7][j] = '1';
            board[8][j] = ' ';
        }
        if (i == 8) {
            board[i][0] = ' ';
            board[i][1] = 'a';
            board[i][2] = 'b';
            board[i][3] = 'c';
            board[i][4] = 'd';
            board[i][5] = 'e';
            board[i][6] = 'f';
            board[i][7] = 'g';
            board[i][8] = 'h';
        }

if (i == 8-7

