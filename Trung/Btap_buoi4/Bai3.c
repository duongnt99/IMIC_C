#include <stdio.h>

int main()
{
    float a, b;
    char c;
    printf("Nhap so thuc a :");
    scanf("%f", &a);
    printf("Nhap so thuc b :");
    scanf("%f", &b);
    printf("Nhap phep tinh: ");
    scanf(" %c", &c);
   
    switch (c) {
        case '+':
            printf("a+b= %.2f", a+b);
            break;
        case '-':
            printf("a-b= %.2f", a-b);
            break;
        case '*':
        printf("a*b= %.2f", a*b);
            break;
        case '/':
        if (b!=0) {
        printf("a/b= %.2f", a/b);
        } else { printf("Khong thuc hien duoc phep tinh");
        }
        break;
        default:
        printf("Bai toan khong hop le");
            break;
    }

    return 0;

}