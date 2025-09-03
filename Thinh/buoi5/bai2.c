#include <stdio.h>

int main() {
    int h;
    printf("Nhap chieu cao tam giac: ");
    scanf("%d", &h);

    for (int i = 1; i <= h; i++) //Vòng lặp ngoài cùng để duyệt qua từng dòng
    { 
        for (int j = 1; j <= h - i; j++) //Vòng lặp in ra những khoảng trắng bên trái
        {
            printf(" ");
        }
        for (int j = 1; j <= 2 * i - 1; j++) 
        {
            if (i == 1 || i == h || j == 1 || j == 2 * i - 1) 
            {
                printf("*");
            } 
            else 
            {
                printf(" ");
            }
        }
        printf("\n");
    }

    return 0;
}
