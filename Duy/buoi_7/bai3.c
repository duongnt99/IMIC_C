#include <stdio.h>
#include <math.h>
#include <string.h>
#include <float.h>
#include <stdlib.h>
#include <errno.h>

int main(){
    double x = DBL_MAX;
    int y = 2;
    errno = 0;
    double result = pow(x,y);
    if(errno == ERANGE){
        perror("Lỗi");
        printf("Mã lỗi: %d\n", errno);
        printf("Mô tả lỗi: %s", strerror(errno));
    }
    else{
        printf("Kết quả là: %.2lf", result);
    }
    return 0;
}