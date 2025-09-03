#include<stdio.h>

int main()
{
    int N;
    long long factorial = 1; //Sử dụng longlong để chứa kq lớn
    printf("Nhap so nguyen lon hon 0:");
    scanf("%d", &N);

    if(N<0)
    {
        printf("N nho hon 0");
    }
    else{
        for (int i=1; i <= N; i++)
        {
            factorial *= i;
        }
        printf("%d! = %llu", N, factorial);
    }
    return 0;
}
