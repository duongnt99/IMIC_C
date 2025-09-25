// Bài tập 2: Tìm giá trị lớn nhất và nhỏ nhất trong mảng và đảo ngược mảng đó
// •	Đề bài: Tìm giá trị lớn nhất (max) và nhỏ nhất (min) trong một mảng số nguyên. 
// Sau đó đảo ngược thứ tự các phần tử trong mảng đó.

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
    //Tìm max và min
    int max = arr[0], min = arr[0];
    for (i = 0; i < n; i++)
    {
        if(arr[i]>max) max=arr[i];
        if(arr[i]<min) min=arr[i];
    }
    // Đảo ngược mảng
    for ( i = 0; i < n/2; i++)
    {
        int temp = arr[i];
        arr[i] = arr[n-1-i];
        arr[n-1-i] = temp;
    }
        
    
    printf("Max: %d\n", max);
    printf("Min: %d\n", min);
    for (i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    
    return 0;

}