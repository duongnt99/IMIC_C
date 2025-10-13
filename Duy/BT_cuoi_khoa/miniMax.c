#include "miniMax.h"

char arr[3][3] = {{' ', ' ', ' '},{' ', ' ', ' '},{' ', ' ', ' '}};

void printBoard(){
    for(int i = 0; i<3; i++){
        for(int k=0;k<13;k++){
            printf("-");
        }
        printf("\n");
        printf("|");
        for(int j=0; j<3; j++){
            printf(" %c ", arr[i][j]);
            printf("|");
        }
        printf("\n");
    }
    for(int k=0;k<13;k++){
        printf("-");
    }
    printf("\n");
}

int cal_point(){
    //Hàng 
    for(int i=0; i<3; i++){
        if((arr[i][0] == arr[i][1]) && (arr[i][1] == arr[i][2]) && (arr[i][0] != ' ')){
            if(arr[i][0] == 'o'){
                return 1;
            }
            else{
                return -1;
            }
        }
    }

    //Cột
    for(int j=0; j<3; j++){
        if((arr[0][j] == arr[1][j]) && (arr[0][j] == arr[2][j]) && (arr[0][j] != ' ')){
            if(arr[0][j] == 'o'){
                return 1;
            }
            else{
                return -1;
            }
        }
    }
    
    // Đường chéo chính
    if((arr[0][0] == arr[1][1]) && (arr[0][0] == arr[2][2]) && (arr[0][0]) != ' '){
        if(arr[0][0] == 'o'){
            return 1;
        }
        else{
            return -1;
        }
    }

    //Đường chéo ngược
    if((arr[0][2] == arr[1][1]) && (arr[0][2] == arr[2][0]) && (arr[0][2]) != ' '){
        if(arr[0][2] == 'o'){
            return 1;
        }
        else{
            return -1;
        }
    }
    return 0;
}

int draw(){
    for(int i=0; i<3; i++){
        for(int j=0; j<3; j++){
            if(arr[i][j] == ' '){
                return 0;
            }
        }
    }
    return 1;
}

int miniMax(int com){
    int point = cal_point();
    if(point == 1){
        return point;
    }
    if(point == -1){
        return point;
    }
    if (draw() == 1) return 0;

    if(com == 1){
        int max = -2;
        for(int i=0; i<3; i++){
            for(int j=0; j<3; j++){
                if(arr[i][j] == ' '){
                    arr[i][j] = 'o';
                    int value = miniMax(0);
                    if(value > max){
                        max = value;
                    }
                    arr[i][j] = ' ';
                }
            }
        }
        return max;
    }

    else{
        int min = 2;
        for(int i=0; i<3; i++){
            for(int j=0; j<3; j++){
                if(arr[i][j] == ' '){
                    arr[i][j] = 'x';
                    int value = miniMax(1);
                    if(value < min){
                        min = value;
                    }
                    arr[i][j] = ' ';
                }
            }
        }
        return min;
    }
}