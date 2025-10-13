#include<stdio.h>

//kiểu trả về của nó là int* (con trỏ, trỏ tới một số nguyên)
int* find_element(int *arr, int size, int value_to_find)
{
    for (int i = 0; i < size; i++)
    {
        //Nếu mà giá trị hiện tại = giá trị cần tìm
        if (*(arr+i) == value_to_find)
        {
            return (arr+i);
        }
        
    }
    //Nếu duyệt hết mảng mà không tìm thấy
    return NULL;
}

int main()
{
    int numbers[] = {3,4,5,6,1,2,8,10,15};
    int n = sizeof(numbers) / sizeof(numbers[0]);
    int value;

    printf("Nhap gia tri: ");
    scanf("%d", &value);

    int *found_ptr = find_element(numbers, n, value);
    if (found_ptr != NULL)
    {
       printf("Gia tri %d tai dia chi: %p\n", *found_ptr, found_ptr);
    }
    else
    {
        printf("Khong tim thay");
    }

    return 0;
    
}