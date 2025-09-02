// Nhập một số nguyên dương và in ra các thừa số nguyên tố của nó. Ví dụ: 12 = 2 * 2 * 3
#include <stdio.h>

int main()
{
    int n;
    printf("Nhap so nguyen duong: ");
    scanf("%d", &n);
    printf("Thua so nguyen to cua %d = ",n);
    while (n%2==0) 
        {  
            printf("%d * ", 2);
            n /=2;
        }
    for(int i=3;i*i<=n; i+=2)
    while (n%i==0) 
        { 
            printf("%d * ", i);
            n /=i;
        }
    if (n>2) {printf("%d * ", n);}
 }