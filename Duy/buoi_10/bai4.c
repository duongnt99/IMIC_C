#include <stdio.h>

#define PRINT_DEBUG(msg) \
    do {\
        printf("%s\n", msg); \
    } while(0)

int main(){
    PRINT_DEBUG("Bắt đầu chương trình");

    if(1)
        PRINT_DEBUG("Trong khoi if");
    else
        PRINT_DEBUG("Trong khoi else");
    return 0;
}