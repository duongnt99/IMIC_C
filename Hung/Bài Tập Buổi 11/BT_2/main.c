#include <stdio.h>
#include "math_utils.h" 

int main()
{
    double x, y;
    printf("Nhap hai so: ");
    scanf("%lf %lf", &x, &y);

    printf("Tong = %.2f\n", add(x, y));
    printf("Hieu = %.2f\n", subtract(x, y));

    return 0;
}
