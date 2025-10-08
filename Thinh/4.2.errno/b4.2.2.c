// Bài tập 2: Lỗi miền giá trị với Căn bậc hai, log
// •	Đề bài: Viết chương trình yêu cầu người dùng nhập một số. 
//     Tính và in ra căn bậc hai và log của nó. 
//     Nếu người dùng nhập số âm, hãy sử dụng errno và perror để báo lỗi EDOM.

#include<stdio.h>
#include<math.h>
#include<errno.h>
#include<string.h>
#include<stdlib.h>

int main()
{
    double x;
    printf("Nhap mot so: ");
    scanf("%lf", &x);

    errno = 0;
    double canbac2 = sqrt(x);
    double logarit = log(x);

    if (x < 0) 
    {
        errno = EDOM;  
        perror("Loi"); // in lỗi kèm theo EDOM

    }

    if (errno == EDOM)
    {
        printf("Using perror \n");
        perror("failed");

    }
    return 0;

}