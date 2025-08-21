#include <stdio.h>
#include <stdint.h>
#include <windows.h>

int main(){
    uint8_t LED_binary = 0x00; // bit 0 đèn đỏ, bit 1 đèn vàng, bit 2 đèn xanh
    int red = 10;
    int yellow = 2;
    int green = 10;

    printf("Chờ 3s để bắt đầu tín hiệu đèn!");
    Sleep(3000);

    LED_binary ^= (1<<0);
    printf("Đèn đỏ bắt đầu!\n");
    printf("Mã nhị phân của đèn: ");
    for(int i = 7; i>=0; i--){
        printf("%d", (LED_binary >> i)&1);
    }
    printf("\n");
    for(int i = red; i>0; i--){
        printf("Số giây còn lại: %d\n", i);
        Sleep(1000);
    }

    LED_binary ^= (1<<0);
    LED_binary ^= (1<<2);
    printf("Đèn xanh bắt đầu!\n");
    printf("Mã nhị phân của đèn: ");
    for(int i = 7; i>=0; i--){
        printf("%d", (LED_binary >> i)&1);
    }
    printf("\n");
    for(int i=green; i>0; i--){
        printf("Số giây còn lại: %d\n", i);
        Sleep(1000);
    }

    LED_binary ^= (1<<2);
    LED_binary ^= (1<<1);
    printf("Đèn vàng bắt đầu!\n");
    printf("Mã nhị phân của đèn là: ");
    for(int i=7; i>=0; i--){
        printf("%d", (LED_binary >> i)&1);
    }
    printf("\n");
    for(int i=yellow; i>0; i--){
        printf("Số giây còn lại: %d\n", i);
        Sleep(1000);
    }
    return 0;
}