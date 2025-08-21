#include <stdio.h>

int main()
{
    int a,b;
    printf("Nhap so nguyen:");
    scanf("%d", &a);
    scanf("%d", &b);

    // Cach 1
    // int tong = a+b;
    // int hieu = a-b;
    // int tich = a*b;
    // float thuong = a/b;

    // printf("Tong: %d",tong);
    // printf("Hieu: %d",hieu);
    // printf("Tich: %d",tich);
    // printf("Thuong: %.2f",thuong);

    // Cach 2
    printf("Tong: %d+%d = %d \n", a,b, a+b);
    printf("Hieu: %d-%d = %d \n", a,b, a-b);
    printf("Tich: %d*%d = %d \n", a,b, a*b);
    printf("Thuong: %d/%d = %.2f \n", a,b, (float)a/b);
    return 0;
}