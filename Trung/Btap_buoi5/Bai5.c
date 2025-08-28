// Nhập một số nguyên dương và in ra các thừa số nguyên tố của nó. Ví dụ: 12 = 2 * 2 * 3
#include <stdio.h>

int main()
{
    int n, daunhan = 1;
    printf("Nhap so nguyen duong: ");
    scanf("%d", &n);
    printf("%d = ",n);
    for (int i=2; i<=n;i++) 
    {
        while (n%i==0) 
        { 
            if (!daunhan) {printf(" * ");}
            printf("%d", i);
            n /=i;
            daunhan = 0;
        }
    }
}