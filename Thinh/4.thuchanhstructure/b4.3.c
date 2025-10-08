// Bài tập 3: Tìm số hoàn hảo
// •	Đề bài: Số hoàn hảo là số có tổng các ước số dương của nó (không kể chính nó) bằng chính nó. 
//     Ví dụ: 6 có các ước là 1, 2, 3 và 1+2+3=6. Viết chương trình tìm tất cả các số hoàn hảo trong khoảng từ 1 đến 10000.

#include <stdio.h>

int main()
{
    for (int a = 1; a < 10000; a++)
    {
        int tong = 0;
        for (int i = 1; i <= a/2; i++)
        {
            if (a%i==0)
            {
                tong+=i;  
            }         
        }
        if (tong==a)
        {
            printf("%d\n", a);
        }          
    }
    return 0;
}