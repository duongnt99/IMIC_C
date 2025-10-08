// Bài tập 1: Tính tổng các phần tử trong mảng
// •	Đề bài: Viết chương trình nhập vào một mảng số nguyên và tính tổng tất cả các phần tử của nó

#include<stdio.h>

int main()
{
    int n;
    printf("Nhap so phan tu cua mang: ");
    scanf("%d", &n);
    
    int arr[n];           // khai báo mảng có n phần tử
    int sum = 0;

    // Nhập các phần tử của mảng
    for (int i = 0; i < n; i++) {
        printf("Nhap phan tu arr[%d]: ", i);
        scanf("%d", &arr[i]);
        sum += arr[i];    // cộng dồn vào tổng
    }

    printf("Tong cac phan tu trong mang = %d\n", sum);
    return 0;
}