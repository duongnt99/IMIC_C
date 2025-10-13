// Bài tập 1: Hàm tính tổng mảng
// •	Đề bài: Viết hàm tinhTong(int arr, int size) nhận vào một mảng và kích thước của nó, trả về tổng các phần tử.

#include<stdio.h>
int tinhTong(int arr[], int size)
{
    int sum = 0;
    for (int i = 0; i < size; i++)
    {
        sum+= arr[i];
    }
    return sum;
    
}

int  main()
{
    int my_arr[] = {5,10,15,20};
    int n = sizeof(my_arr) / sizeof(my_arr[0]);

    int sum = tinhTong(my_arr, n);
    printf("Tong cac phan tu cua mang: %d", sum);
    return 0;

}