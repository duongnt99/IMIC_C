#include <stdio.h>

int main(){
    int h;
    printf("Nhập chiều cao h: ");
    scanf("%d", &h);
    for (int i=0; i<h-1; i++){
        for(int j=0; j<(h*2 - 1); j++){
            if(j==(h-1-i)||(j==(h-1+i))){
                printf("*");
            }
            else{
                printf(" ");
            }
        }
        printf("\n");
    }
    for(int i=0; i<(h*2-1); i++){
        printf("*");
    }
    return 0;
}