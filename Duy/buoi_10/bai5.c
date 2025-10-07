#include <stdio.h>

#define SQUARE_MACRO(x) ((x)*(x))

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