#include "area.h"
#include <stdio.h>

const float PI = 3.14159;

void area_circle(){
    double r;
    printf("Nhập bán kính: ");
    scanf("%lf", &r);
    double result = r*r*PI;
    printf("Diện tích là: %.2lf", result);
}