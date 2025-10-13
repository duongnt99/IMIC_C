// Bài tập 1: Phân loại số
// •	Đề bài: Viết chương trình nhập vào một số nguyên. 
//     Sử dụng if-else lồng nhau để xác định và in ra màn hình xem số đó là "Số dương chẵn", "Số dương lẻ", "Số âm", hay "Số không".

#include <stdio.h>

int main()
{
    int number;
    printf("Nhap so nguyen: ");
    scanf("%d", &number);
    if (number>0)
    {
        if (number%2==0)
        {
            printf("so duong chan");
        }else
            printf("so duong le");
    }
    else if (number<0)
    {
        printf("so am");
    }
    else
    {
        printf("so 0");
    }
    return 0;
}