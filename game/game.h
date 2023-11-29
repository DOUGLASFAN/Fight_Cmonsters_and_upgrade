#pragma once
#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define ROW 8
#define CLO 8

#define ROWS ROW+2
#define CLOS CLO+2


#define wantboomcount 10
void displayboard(char board[ROWS][CLOS], int row, int clo);
void initializationboard(char board[ROWS][CLOS], int rows, int clos, char set);


void setboom(char board[ROWS][CLOS], int row, int clo);

void findboom(char board[ROWS][CLOS], int row, int clo);
