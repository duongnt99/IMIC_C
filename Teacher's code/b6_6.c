// Bài tập 5: So sánh macro và hàm inline
// •	Đề bài: Triển khai phép tính bình phương bằng cả macro SQUARE_MACRO và 
// hàm inline int square_inline(int x). Viết một hàm main sử dụng cả hai so sánh sự khác biệt

#include<stdio.h>

//Macro -thay thế văn bản, không an toàn về kiểu
#define SQUARE_MACRO(x) ((x)*(x))

//Inline - an toàn về kiểu, gợi ý cho trình biên dịch
static inline int square_inline(int x)
{
    return x*x;
}

int main()
{
    int a=5;
    float b=3.5;

    printf("Macro voi int: %d\n", SQUARE_MACRO(a));
    printf("Macro voi double: %f\n", SQUARE_MACRO(b));

    printf("Inline voi int: %d\n", square_inline(a));
    printf("Inline voi double: %d\n", square_inline((int)b));
}