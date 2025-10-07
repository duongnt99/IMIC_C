#include "math_utils.h"
#include <stdio.h>

int main(){
    int n;
    double a, b;
    printf("Nhập 2 số a và b: ");
    scanf("%lf %lf", &a,&b);
    printf("Chọn phép tính: \n1.Add\n2.Subtract\n");
    scanf("%d", &n);
    switch (n){
        case 1:
            add(a,b);
            break;
        case 2:
            subtract(a,b);
            break;
        default:
            printf("Vui lòng nhập lại phép tính");
            break;
    }
}