#include "PvC.h"

void move(int* row, int* col){
    int max = -2;
    for(int i=0; i<3; i++){
        for(int j=0; j<3; j++){
            if(arr[i][j] == ' '){
                arr[i][j] = 'o';
                int value = miniMax(0);
                if(value > max){
                    max = value;
                    *row = i;
                    *col = j;
                }
                arr[i][j] = ' ';
            }
        }
    }
    arr[*row][*col] = 'o';
}

void input_move(int* row, int* col){
    int p;
    printf("Pick the cell you want to move to: ");
    scanf("%d", &p);
    *row = (p-1)/3;
    *col = (p-1)%3;
    if(arr[*row][*col] != ' '){
        printf("The move has been made.\n");
        input_move(row, col);
    }
    arr[*row][*col] = 'x';
}