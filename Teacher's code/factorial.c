// Bài tập 4: Tính N giai thừa
// Đề bài: Viết chương trình nhập vào một số nguyên không âm N và tính N! (N giai thừa). Biết rằng N!=1×2×...×N, và 0!=1
// nhap so 5:
// In ket qua giai thua: N=1*2*3*4*5

#include<stdio.h>

int main()
{
    int number;
    long long factorial = 1; //Sử dụng long long để chứa được kết quả lớn

    printf("Nhap so nguyen: ");
    scanf("%d", number);

    if ((number<0))
    {
        printf("Khong hop le");
    }
    else{
        for (int i = 1; i <= number; i++)
        {
            factorial *=i;
        }
        printf("%lld", factorial);
    }
    
}