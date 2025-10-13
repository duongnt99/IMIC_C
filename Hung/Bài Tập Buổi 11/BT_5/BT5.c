#include <stdio.h>
#define SQUARE_MACRO(x)  ((x) * (x))


static inline int square_inline(int x)
{
    return x * x;
}

int main()
{
    int a = 5;
    int b = 3 + 2;
    int c = 3;

    printf("=== So sanh Macro va Inline Function ===\n");

    printf("SQUARE_MACRO(a) = %d\n", SQUARE_MACRO(a));
    printf("square_inline(a) = %d\n", square_inline(a));

    
    printf("\nSQUARE_MACRO(3 + 2) = %d\n", SQUARE_MACRO(3 + 2));  
    printf("square_inline(3 + 2) = %d\n", square_inline(3 + 2));  

    
    printf("\nKiem tra hieu ung phu:\n");
    printf("SQUARE_MACRO(c++) = %d\n", SQUARE_MACRO(c++));  
    c = 3;
    printf("square_inline(c++) = %d\n", square_inline(c++));  

    return 0;
}
