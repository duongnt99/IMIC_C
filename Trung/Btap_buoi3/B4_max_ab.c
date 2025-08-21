#include <stdio.h>

int main()
{
    int a,b;
    printf("Nhap so a: ");
    scanf("%d", &a);
    printf("Nhap so b: ");
    scanf("%d", &b);
    printf("So lon nhat la: %d", (a>b) ? a : b);

}