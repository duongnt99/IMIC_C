#include <stdio.h>

int main() {
    int tong_giay;
    printf("Nhap tong so giay: ");
    scanf("%d", &tong_giay);

    int gio = tong_giay / 3600;            
    int phut = (tong_giay % 3600) / 60;    
    int giay = tong_giay % 60;            

    printf("Thoi gian: %d:%d:%d\n", gio, phut, giay);

    return 0;
}


