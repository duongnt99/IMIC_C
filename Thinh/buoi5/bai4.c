#include <stdio.h>

int main() {
    int n, i;
    printf("Nhap so N: ");
    scanf("%d", &n);

    if (n <= 0) {
        printf("Hay nhap gia tri duong\n");
        return 0;
    }
    int a = 0, b = 1, c;
    printf("Chuoi fibonacci: ");
    for (i = 0; i < n; i++) 
    {
        if (i == 0) 
        {
            printf("%d ", a);
        } 
        else if (i == 1) 
        {
            printf("%d ", b);
        } 
        else 
        {
            c = a + b;
            printf("%d ", c);
            a = b;
            b = c;
        }
    }

    printf("\n");
    return 0;
}
