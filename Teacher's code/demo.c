#include<stdio.h>

int main()
{
    // Khi được sử dụng trong 1 biểu thức, tên của một mảng sẽ được phân rã thành 1 con trỏ trỏ đến phần tử đầu tiên của mảng đó
    // Nếu chúng ta có một mảng int arr -> arr sẽ tương đương với &arr
    int arr[5] = {1,20,3,40,5};
    int *p;

    p = arr;
    //sizeof(int) = 4 byte
     
    //arr++ -> sai vì chúng ta không thể thay đổi địa chỉ mà tên mảng trỏ tới
    p++;
    printf("%d\n", *p);

    //Phân biệt giữa array[i] và *(array+i)

    // Dùng array[i] trả về giá trị thứ i của mảng, nhưng thực chất là nó là lớp vỏ cú pháp của biểu thức *(array+i)
    int value = arr[3];
    int value1 = *(arr+3);

    printf("%d\n", value);
    printf("%d\n", value1);

    return 0;
}
