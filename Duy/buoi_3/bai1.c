#include <stdio.h>

int main(){
    float r;
    float S;
    float V;
    const float pi = 3.14159;
    printf("Nhập bán kính của vòng tròn: ");
    scanf("%f", &r);
    S = r*r*pi;
    V = 2*r*pi;
    printf("Diện tích hình tròn là: %.5f\n", S);
    printf("Chu vi của hình tròn là: %.5f", V);
    return 0;
}