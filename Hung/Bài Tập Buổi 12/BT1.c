// Bài tập 1: Tính tổng các phần tử trong mảng
// •	Đề bài: Viết chương trình nhập vào một mảng số nguyên và tính tổng tất cả các phần tử của nó

#include<stdio.h>
int main()
{
    int n, i, sum = 0;
    printf("Nhap so phan tu cua mang: ");
    scanf("%d", &n);

    int arr[n];
    for(i=0; i<n;i ++)
    {
        printf("Nhap phan tu thu %d: ",i);
        scanf("%d", &arr[i]);
    }
    for (i = 0; i < n; i++)
    {
       sum+=arr[i];
    }
    
    printf("Tong cua mang: %d\n", sum);
    return 0;

}