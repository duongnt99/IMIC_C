// Hàm tìm max bằng con trỏ
// Đề bài: Viết hàm timMax(int *arr, int size) để tìm giá trị lớn nhất trong mảng, sử dụng cú pháp con trỏ trong thân hàm.
#include<stdio.h>
#include<limits.h>

int timMax(int *arr, int size)
{
    if (size < 0) // Mảng rỗng
    {
        return INT_MIN; //Giá trị int nhỏ nhất có thể
    }
    
    int max_val = *arr; //Giả sử phần tử đầu tiên của mảng là lớn nhất

    for (int i = 1; i < size; i++)
    {
        if (*(arr+i) > max_val)
        {
           max_val = *(arr+i);
        }
        
    }
    return max_val;
    
}

int main()
{
    int my_arr[] = {12,45,9,24,50};
    int n = sizeof(my_arr)/sizeof(my_arr[0]);

    int max = timMax(my_arr, n);
    printf("Gia tri lon nhat: %d\n", max);
    return 0;
}