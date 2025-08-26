#include <stdio.h>
int main(){
    float a;
    const float pi = 3.14;
    printf("nhap ban kinh hinh tron:");
    scanf(" %f",&a);
    if (a >= 0){
    float dientich = pi * (a*a);
    float chuvi = 2 * pi * a;
    printf("dien tich hinh tron la:%.2f m.m\n",dientich);
    printf("chu vi hinh tron la:%.2f m",chuvi);
    }
    else{
        printf("so %.2f khong phai so duong",a);
    }
    
    return 0;
}