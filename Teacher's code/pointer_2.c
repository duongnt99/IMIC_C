// Bài tập 2: Duyệt mảng chỉ bằng con trỏ
// •	Đề bài: Viết chương trình duyệt và in các phần tử của một mảng số nguyên chỉ bằng cách sử dụng con trỏ, 
// không dùng cú pháp arr[i].

#include<stdio.h>


int main()
{
    int arr[] = {10,30,40,50};
    int n = sizeof(arr) / sizeof(arr[0]);

    int *ptr = arr; //Tên mảng cũng là địa chỉ của phần tử đầu tiên

    printf("Các phần tử của mảng là:\n");

    for (int i = 0; i < n; i++)
    {
        printf("%d ", *(ptr+i));
    }
    
    printf("---------------------");

    for (int i = 0; i < n; i++)
    {
        printf("%d ", *ptr);
        ptr++;// Di chuyển con trỏ đến ô nhớ của phần tử kế tiếp
    }
    
    return 0;
}