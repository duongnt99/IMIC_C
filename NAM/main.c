#include <stdio.h>

int main(void) {
    double r;
    printf("Nhap ban kinh: ");
    if(scanf("%lf", &r) != 1){
        printf("Du lieu khopng hop le .\n");
        return 1;

    };
    if( r < 0 ) {
        printf("Ban kinh la so lon hon 0 .\n");
        return 1;

    }

    double chu_vi = 2 * 3.14159 * r;
    double dien_tich = 3.14159 * r * r;
    printf("Chu vi hinh tron la: %.2f\n", chu_vi);
    printf("Dien tich hinh tron la: %.2f\n", dien_tich);
    return 0;
    
}