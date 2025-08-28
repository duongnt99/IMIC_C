#include <stdio.h>

int main()
{
    int N;
    long long kq = 1; // kết quả có thể lớn

    printf("Nhap vao so nguyen N: ");
    scanf("%d",&N);
    if (N<0) {
        printf("So nguyen am khong thuc hien phep tinh duoc");
    } else {
    for (int i=1; i<=N ; i++) {
    kq *=i;
    } 
    printf("Ket qua tinh giai thua la: %lld", kq);
}
    return 0;
}