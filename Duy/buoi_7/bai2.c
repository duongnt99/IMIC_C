#include <stdio.h>
#include <math.h>
#include <errno.h>
#include <string.h>

int main(){
    errno = 0;
    float n;
    printf("Nhập vào một số ngẫu nhiên: ");
    scanf("%f", &n);

    float result1 = sqrt(n);
    float result2 = log(n);
    if(n>=0){
        printf("Căn bậc 2 của số đó là: %.2f\n", result1);
        printf("Logarit tự nhiên của %.2f là: %.2f\n", n, result2);
    }
    else{
        printf("Đây là 1 số âm\n");
        perror("Lỗi");
    }

    return 0;
}