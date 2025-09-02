// Viết chương trình nhập vào chiều cao h và vẽ ra một tam giác cân rỗng ruột bằng các dấu *.
#include <stdio.h>

int main()
{
    int h, i, j;
    printf("Nhap chieu cao h: ");
    scanf("%d", &h);

    for (int i = 1; i <= h; i++)
    {
        for (j = 1; j <= h - i; j++)
        {
            printf(" ");
        }

        for (int j = 1; j <= 2 * i - 1; j++)
        {
            if(j==1 || j ==2*i-1 || i==h)
            {printf("*");}
            else {printf(" ");}
        }

        printf("\n");
    }

    return 0;
}
