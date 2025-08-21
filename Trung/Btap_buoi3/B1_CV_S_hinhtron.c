#include <stdio.h>
int main()
{
    float R; 
    const float pi=3.14159;
    
    printf("Nhap ban kinh hinh tron: ");
    scanf("%f", &R);
    
    printf("Chu vi hinh tron la: %f \n", 2*pi*R);
    printf("Dien tich hinh tron la: %f", pi*R*R);
    return 0;
}