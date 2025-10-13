#include "PvC.h"
#include "PvP.h"
#include <stdlib.h>

void pvc(){
    printf("You wil play as: x\n");
    printf("Press Enter to start ^_^");
    getchar();
    int n = 1;
    int row = 0;
    int col = 0;
    while((cal_point() == 0) && (draw() == 0)){
        if(n == 0){
            printf("Computer is thinking...\n");
            move(&row, &col);
            printf("The computer has moved to square number : %d.\n", (row*3 + (col+1)));
            n=1;
        }
        else{
            input_move(&row, &col);
            n=0;
        }
        printBoard();
    }
    if(draw() == 1){
        printf("---Draw---\n");
    }
    if(cal_point() == 1){
        printf("Unfortunately, you lost (T_T)\n");
    }
    else if(cal_point() == -1){
        printf("Congratulations, you've won!!! *^___^*\n");
    }
}

void pvp(){
    printf("Press Enter to start ^_^");
    getchar();
    int n = 1;
    int row = 0;
    int col = 0;
    while((cal_point() == 0) && (draw() == 0)){
        input_move_pvp(&row, &col, n);
        if(n==1){
            n++;
        }
        else{
            n--;
        }
        printBoard();
    }
    if(draw() == 1){
        printf("---Draw---\n");
    }
    if(cal_point() == 1){
        printf("Player 2 wins!!!\n");
    }
    else if(cal_point() == -1){
        printf("Player 1 wins!!!\n");
    }
}

int game_mode(){
    int n;
    printf("---GAME MENU---\n");
    printf("1. PvC\n2. PvP\n3. Exit\n");
    printf("Select game mode: ");
    scanf("%d", &n);
    getchar();
    return n;
}

void clean(){
    for(int i=0; i<3; i++){
        for(int j=0; j<3; j++){
            arr[i][j] = ' ';
        }
    }
}

int main(){
    printf("--- BEGIN---\n");
    printf("Manual:\n");
    for(int i=0; i<=2; i++){
        for(int k=0;k<13;k++){
            printf("-");
        }
        printf("\n");
        printf("|");
        for(int j=1; j<=3; j++){
            printf(" %d ", (i*3)+j);
            printf("|");
        }
        printf("\n");
    }
    for(int k=0;k<13;k++){
        printf("-");
    }
    printf("\n");
    printf("You just need to enter the number of the cell you want to mark.\n");
    while(1){
        switch(game_mode()){
            case 1:
                pvc();
                clean();
                break;
            case 2:
                pvp();
                clean();
                break;
            case 3:
                exit(1);
            default:
                game_mode();
        }
    }
    return 0;
}