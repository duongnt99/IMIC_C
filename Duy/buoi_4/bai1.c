#include <stdio.h>

int main(){
    int number;
    printf("Nhập 1 số nguyên: ");
    scanf("%d", &number);

    if(number>0){
        if((number%2)==0){
            printf("Đây là số nguyên dương chẵn.");
        }
        else{
            printf("Đây là số nguyên dương lẻ.");
        }
    }
    else if(number<0){
        printf("Đây là số nguyên âm");
    }
    else{
        printf("Đây là số 0");
    }
    
    return 0;
}