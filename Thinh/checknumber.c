#include <stdio.h>

int main()
{
    int number;
    printf("Nhap so nguyen: ");
    scanf("%d", &number);
    if (number>0)
    {
        if (number%2==0)
        {
            printf("so duong chan");
        }else
            printf("so duong le");
    }
    else if (number<0)
    {
        printf("so am");
    }
    else
    {
        printf("so 0");
    }
    return 0;
}