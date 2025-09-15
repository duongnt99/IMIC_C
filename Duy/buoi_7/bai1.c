#include <stdio.h>
#include <math.h>
#include <string.h>
#include <errno.h>

int main(){
    errno = 0;
    float result = acos(2);
    if (errno == EDOM){
        perror("Lỗi");
        printf("Mã lỗi: %d\n", errno);
        printf("Lỗi: %s", strerror(errno));
    }
    else{
        printf("Result = %.2f", result);
    }
    return 0;
}