#include <stdio.h>
#include <math.h>
#include <float.h>   
#include <errno.h>
#include <string.h>

int main()
{
    double base = DBL_MAX;  // số double lớn nhất có thể
    double exp = 2.0;

    errno = 0;
    double result = pow(base, exp);

    if (errno == ERANGE)
    {
        printf("Loi: tran so \n");
        printf("Chi tiet: %s\n", strerror(errno));
    }
    else if (errno == EDOM)
    {
        printf("Loi: ngoai mien gia tri \n");
        printf("Chi tiet: %s\n", strerror(errno));
    }
    else
    {
        printf("Ket qua pow(%.2e, %.2f) = %.2e\n", base, exp, result);
    }

    return 0;
}