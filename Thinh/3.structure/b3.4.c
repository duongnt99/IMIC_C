// Bài tập 4: Tính N giai thừa
// •	Đề bài: Viết chương trình nhập vào một số nguyên không âm N và tính N! (N giai thừa). 
//     Biết rằng N!=1×2×...×N, và 0!=1

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
