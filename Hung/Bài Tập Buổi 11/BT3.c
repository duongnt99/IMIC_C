#include <stdio.h>

#define PI 3.14159  

int main()
{
    double r, chu_vi, dien_tich;

    printf("Nhap ban kinh hinh tron: ");
    scanf("%lf", &r);

    chu_vi = 2 * PI * r;
    dien_tich = PI * r * r;

    printf("Chu vi = %.2f\n", chu_vi);
    printf("Dien tich = %.2f\n", dien_tich);

    return 0;
}
