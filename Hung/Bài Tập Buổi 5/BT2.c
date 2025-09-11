#include <stdio.h>

int main() {
    int h;
    printf("Nhap chieu cao h: ");
    if (scanf("%d", &h) != 1 || h <= 0) {
        printf("Chieu cao h khong hop le!\n");
        return 0;
    }

    for (int i = 1; i <= h; i++) {
        // in khoang trang de canh giua
        for (int space = 0; space <= h - i; space++) 
        printf(" ");
        //  dau sao = 2*i - 1 
        for (int star = 0; star <= 2*i - 1; star++){ 
            if(i==h){
                printf("*");
            }
            else{
                if(star == 0 || star == 2*i-2){
                printf("*");
            }
                else{
                printf(" ");
                }
            }
        
        }
    printf("\n");
    }

    return 0;
}