// Bài tập 2: Hàm tìm max bằng con trỏ
// •	Đề bài: Viết hàm timMax(int *arr, int size) để tìm giá trị lớn nhất trong mảng, sử dụng cú pháp con trỏ trong thân hàm.

#include <stdio.h>

// Hàm tìm giá trị lớn nhất trong mảng bằng con trỏ
int timMax(int *arr, int size)
{
    int max = *arr; // Gán phần tử đầu tiên làm max ban đầu
    for (int i = 1; i < size; i++)
    {
        if (*(arr + i) > max) // Truy cập phần tử bằng con trỏ
        {
            max = *(arr + i);
        }
    }
    return max;
}

int main()
{
    int my_arr[] = {2,4,6,10,7};
    int n = sizeof(my_arr) / sizeof(my_arr[0]);

    int maxValue = timMax(my_arr, n);
    printf("Gia tri lon nhat trong mang la: %d\n", maxValue);

    return 0;
}
