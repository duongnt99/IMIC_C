#ifndef MINIMAX_H
#define MINIMAX_H

#include <stdio.h>
#include <math.h>

extern char arr[3][3];

void printBoard();
int cal_point();
int draw();
int miniMax(int com);

#endif