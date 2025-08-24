#include <stdio.h>
#include <stdint.h>
#include <windows.h>

void print_binary(uint8_t n){
    for(int i=7; i>=0; i--){
        printf("%d", (n>>i)&1);
    }
    printf("\n");
}

int main(){
    uint8_t PORTD = 0x00;
    int n = 0;
    unsigned int green_time;
    unsigned int red_time;
    unsigned int yellow_time;
    printf("Thời gian đèn đỏ là: ");
    scanf("%u", &red_time);
    getchar();
    printf("Thời gian đèn xanh là: ");
    scanf("%u", &green_time);
    getchar();
    printf("Thời gian đèn vàng là: ");
    scanf("%u", &yellow_time);
    getchar();

    printf("Nhấn để bắt đầu");
    getchar();

    while(1){
        PORTD ^= (1<<n);
        switch(PORTD){
            case 0b00000001:
            printf("Đèn đỏ!!! ");
            print_binary(PORTD);
            for(int i=red_time; i>0; i--){
                printf("Số giây còn lại: %d\n", i);
                Sleep(1000);
            }
            continue;
        }
        switch(PORTD){
            case 0b00000010:
            printf("Đèn xanh!!! ");
            print_binary(PORTD);
            for(int i=green_time; i>0; i--){
                printf("Số giây còn lại: %d\n", i);
                Sleep(1000);
            }
            continue;
        }
        switch(PORTD){
            case 0b00000100:
            printf("Đèn vàng!!! ");
            print_binary(PORTD);
            for(int i=yellow_time; i>0; i--){
                printf("Số giây còn lại: %d\n", i);
                Sleep(1000);
            }
            continue;
        }
        PORTD != (1<<n);
        n++;
        if(n>2){
            n = 0;
        }
    }

    return 0;
}