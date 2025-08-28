// Viết chương trình nhập vào chiều cao h và vẽ ra một tam giác cân đặc ruột bằng các dấu *.
#include <stdio.h>

int main()
{
    int h;
    printf("Nhap chieu cao h: ");
    scanf("%d", &h);

    for (int i = 1; i <= h; i++) // Vòng lặp ngoài cùng để duyệt qua từng dòng
    {
        for (int j = 0; j <= h - i; j++) // Vòng lặp để in ra các khoảng trắng bên trái tạo tam giác cân
        {
            printf(" ");
        }

        for (int j = 0; j <= 2 * i - 1; j++) // Vòng lặp để in dấu *
        {
            printf("*");
        }

        printf("\n");
    }
}