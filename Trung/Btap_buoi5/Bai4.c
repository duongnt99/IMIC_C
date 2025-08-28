// In ra N số đầu tiên của chuỗi Fibonacci (0, 1, 1, 2, 3, 5, 8...) mà không sử dụng kỹ thuật đệ quy.

#include <stdio.h>
int main()
{
    int N, a=0, b=1;
        printf("Nhap N: ");
        scanf("%d", &N);
        printf("Day Fibonacci la: ");
    for (int i = 1; i <= N; i++)
    { 
        printf("%d ", a);
        int next=a+b;
        a=b;
        b=next;      
    }
    return 0;
}
