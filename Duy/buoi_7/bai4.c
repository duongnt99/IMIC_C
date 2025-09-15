#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <string.h>
#include <errno.h>

void calculate_sqrt(double a){
    errno = 0;
    double result = sqrt(a);
    if(!errno){
        printf("Kết quả là: %.2f\n", result);
    }
    else{
        perror("Lỗi");
    }
}

void calculate_log(double a){
    errno = 0;
    double result = log(a);
    if(!errno){
        printf("Kết quả là: %.2f\n", result);
    }
    else{
        perror("Lỗi");
    }
}

void calculate_pow(double a, double b){
    errno = 0;
    double result = pow(a,b);
    if(!errno){
        printf("Kết quả là: %.2f\n", result);
    }
    else{
        perror("Lỗi");
    }
}

int main(){
    double a, b;
    int operator;
    while(1){
        printf("Vui lòng nhập phép toán bạn muốn:\n"
            "1. Sqrt\n"
            "2. Log\n"
            "3. Pow\n");
        scanf("%d", &operator);
        switch(operator){
            case 1:
                printf("Nhập một số: ");
                scanf("%lf", &a);
                calculate_sqrt(a);
                break;
            case 2:
                printf("Nhập một số: ");
                scanf("%lf", &a);
                calculate_log(a);
                break; 
            case 3:
                printf("Nhập cơ số và số mũ: ");
                scanf("%lf %lf", &a, &b);
                calculate_pow(a, b);
                break;
        }    
    }
    return 0;
}