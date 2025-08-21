// Viết chương trình nhập vào một số nguyên. 
// Sử dụng if-else lồng nhau để xác định và in ra màn hình xem số đó là "Số dương chẵn", "Số dương lẻ", "Số âm", hay "Số không".

#include<stdio.h>

int main()
{
    int number;
    printf("Nhap so nguyen: ");
    scanf("%d", &number);

    if (number > 0)
    {
        /* code */
        if (number % 2 == 0)
        {
            /* code */
            printf("So duong chan");
        } else{
            printf("So duong le");
        }
        
    }
    else if (number < 0)
    {
        /* code */
        printf("So am");
    }
    else
    {
        printf("So 0");
    }
    
    return 0;
    
}