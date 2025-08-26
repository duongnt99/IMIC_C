#include <stdio.h>
int main(){
    int a;
    printf("Nhap vao mot so nguyen:");
    scanf("%d",&a);
    if(a > 0){
        if(a % 2 == 0){
            printf("So %d la so duong chan",a);
        }
        else{
            printf("So %d la so duong le",a);
        }
    }
    else if(a <0){
        printf("so am");
    }
    else{
        printf("so khong am cung khong duong");
    }
    return 0;
}