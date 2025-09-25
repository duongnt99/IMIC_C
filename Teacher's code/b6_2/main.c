// ; Bài tập 2: Xây dựng một thư viện tiện ích toán học nhỏ
// ; •	Đề bài: Tạo một thư viện toán học đơn giản với các hàm add(a, b) và subtract(a, b). 
// ; Cấu trúc dự án gồm main.c, math_utils.c, và math_utils.h.

#include<stdio.h>
#include"math_utils.h"

int main()
{
    int x =10, y=5;
    printf("%d + %d = %d\n", x,y, add(x,y));
    printf("%d - %d = %d\n", x,y, subtract(x,y));
    return 0;
}