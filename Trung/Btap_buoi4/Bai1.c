#include <stdio.h>

int main()
{
    int a;
    printf("Nhap so nguyen :");
    scanf("%d", &a);
    
    if (a>0)
    {
        if (a % 2 == 0)
        {
            printf("So duong chan");
        } else{
            printf("So duong le");
        }
    } else if (a<0)
    { printf("So am");
    } else { printf("So khong");}
    return 0;
}