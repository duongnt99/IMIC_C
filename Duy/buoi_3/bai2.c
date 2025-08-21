#include <stdio.h>

int main(){
    int time;
    int gio;
    int phut;
    int giay;
    printf("Nhập số giây: ");
    scanf("%d", &time);
    gio = time/3600;
    phut = (time%3600)/60;
    giay = (time%3600)%60;
    printf("Giờ: %d\n", gio);
    printf("Phút %d\n", phut);
    printf("Giay: %d\n", giay);
    return 0;
}