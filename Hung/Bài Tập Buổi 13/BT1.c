// •	Đề bài: Viết chương trình nhập vào hai số nguyên. 
// Sử dụng con trỏ để tìm và in ra số lớn hơn sau đó hoán đổi giá trị của hai số nguyên đó

#include<stdio.h>

// Hàm hoán đổi giá trị 2 số nguyên qua con trỏ
void swap(int *ptr1, int *ptr2)
{
    int temp = *ptr1; //Lưu giá trị của biến mà con trỏ ptr1 trỏ tới
    *ptr1 = *ptr2; //Gán giá trị của của biến ptr2 trỏ tới cho biến mà ptr1 trở tới
    *ptr2 = temp;
}
int main()
{
    int a,b;
    scanf("%d", &a);
    scanf("%d", &b);

    //Khai báo 2 con trỏ và cho chúng trỏ tới địa chỉ của a và b
    int *ptr_a = &a;
    int *ptr_b = &b;

    // Tìm và in số lớn hơn
    if (*ptr_a > *ptr_b)
    {
       printf("So lon hon la: %d\n", *ptr_a);
    }
    else
    {
        printf("So lon hon la: %d\n", *ptr_b);
    }

    printf("Gia tri ban dau: a = %d, b = %d\n",a,b);

    swap(ptr_a, ptr_b);

    printf("Gia tri sau hoan doi: a = %d, b = %d\n",a,b);
    
    return 0;
}