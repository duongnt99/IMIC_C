#include<stdio.h>

int main()
{
    int n, i, t1 = 0, t2 = 1, next_number;
    printf("Nhap so luong so Fibonacci: ");
    scanf("%d", &n);

    printf("Chuoi Fibonacci: ");
    for (i = 1; i <= n; i++)
    {
        printf("%d, ", t1);
        next_number = t1+t2;
        t1 = t2;
        t2 = next_number;
    }
    return 0;
    // i = 1 : 0, (t1=1,t2=1)
    // i = 2 : 0, 1 (t1=1,t2=2)
}
