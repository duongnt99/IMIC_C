#include<stdio.h>

int main()
{
    int h, i, j;
    printf("Nhap chieu cao h: ");
    scanf("%d", &h);

    for(int i=1; i<=h; i++) //Vòng lặp ngoài cùng để duyệt qua từng dòng
    {
        for(j = 1; j <= h - i; j++){ //Vòng lặp để in ra các khoảng trắng bên trái tạo tam giác cân
            printf(" ");
        }
        for (int j = 1; j <= 2*i-1; j++) // Vòng lặp để in dấu *
        {
            if (j ==1 || j == 2*i-1 || i==h) //Chỉ in sao ở cạnh và ở đáy
            {
                printf("*");
            }
            else{
                printf(" ");
            }
            
        }
        
        printf("\n");
    }
}