// Viết chương trình yêu cầu người dùng nhập một số. 
// Tính và in ra căn bậc hai và log của nó. 
// Nếu người dùng nhập số âm, hãy sử dụng errno và perror để báo lỗi EDOM
#include <stdio.h>
#include <math.h>
#include <errno.h>
#include <string.h>

int main()
{
    double x;
    printf("Nhap mot so: ");
    scanf("%lf", &x);

    errno = 0; 

    if (x < 0)
    {
        errno = EDOM;
        perror("Loi: so am khong co can bac hai hoac log hop le");

        printf("Chi tiet loi: %s\n", strerror(errno));

        return 1; 
    }

    
    double can_bac_hai = sqrt(x);
    double logarit = log(x);

    printf("Can bac hai cua %.2f = %.4f\n", x, can_bac_hai);
    printf("Logarit (tự nhiên) cua %.2f = %.4f\n", x, logarit);

    return 0;
}
