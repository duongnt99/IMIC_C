#include "PvP.h"

void input_move_pvp(int* row, int* col, int n){
    if(n == 1){
        char c = 'x';
        int p;
        printf("It's Player %d's turn: ", n);
        scanf("%d", &p);
        *row = (p-1)/3;
        *col = (p-1)%3;
        if(arr[*row][*col] != ' '){
            printf("The move has been made.\n");
            input_move_pvp(row, col, n);
        }
        arr[*row][*col] = c;
    }
    else{
        char c = 'o';
        int p;
        printf("It's Player %d's turn: ", n);
        scanf("%d", &p);
        *row = (p-1)/3;
        *col = (p-1)%3;
        if(arr[*row][*col] != ' '){
            printf("The move has been made.\n");
            input_move_pvp(row, col, n);
        }
        arr[*row][*col] = c;
    }
}