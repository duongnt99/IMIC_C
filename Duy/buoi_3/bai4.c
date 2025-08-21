#include <stdio.h>

int main(){
    int a, b;
    printf("Nhập 2 số nguyên a và b: ");
    scanf("%d %d", &a,&b);
    int max = (a>b)? a : b;
    printf("Số lớn nhất trong 2 số là: %d", max);
    return 0;
}