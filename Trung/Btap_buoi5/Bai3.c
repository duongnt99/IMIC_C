// Số hoàn hảo là số có tổng các ước số dương của nó (không kể chính nó) bằng chính nó. 
//Ví dụ: 6 có các ước là 1, 2, 3 và 1+2+3=6. Viết chương trình tìm tất cả các số hoàn hảo trong khoảng từ 1 đến 10000.
#include <stdio.h>
int main()
{
    int tong;
        for (int i = 1; i <= 10000; i++)
    {
        tong = 0;
        for (int j = 1; j < i; j++) 
        {
            if (i%j == 0) {(tong +=j);}
        }
        if(tong == i) {printf("So hoan hao: %d \n", tong);}
        
    }

    return 0;
}