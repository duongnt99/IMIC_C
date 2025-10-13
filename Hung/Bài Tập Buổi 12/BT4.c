#include<stdio.h>

int binarySearch(int arr[], int n, int x)
{
    int left = 0, right = n-1;
    while (left <= right)
    {
        int mid = (left+right)/2; //lấy chỉ số ở giữa
        if (arr[mid] == x)
        {
            return mid; // tìm thấy x
        }
        else if (arr[mid]<x)
        {
            left = mid+1; //x nằm bên phải
        }
        else{
            right = mid-1; //x nằm bên tay trái
        }
        
    }
    return -1;
}

int main()
{
    int n, i, x;

    printf("Nhap so phan tu cua mang: ");
    scanf("%d", &n);

    int arr[n];
    for(i=0; i<n;i ++)
    {
        printf("Nhap phan tu thu %d: ",i);
        scanf("%d", &arr[i]);
    }

    printf("Nhap gia tri can tim: ");
    scanf("%d", &x);
    
    int result = binarySearch(arr, n, x);
    if (result != -1)
    {
       printf("%d o vi tri index = %d\n", x, result);
    }
    else{
        printf("khong tim duoc x");
    }

    return 0;
    
}