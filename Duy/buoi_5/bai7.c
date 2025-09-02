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
    uint8_t PORTB = 0x00;
    int bit = 0;
    int state = 0;
    printf("Nhấn đẻ bắt đầu");
    getchar();

    while(1){
        if(bit==0){
            state = 0;
        }
        if(bit==7){
            state = 1;
        }
        switch(state){
            case 0:
                PORTB ^= (1<<bit);
                printf("LED số %d sáng: ", bit);
                print_binary(PORTB);
                Sleep(500);
                PORTB ^= (1<<bit);
                bit++;
                break;
            case 1:
                PORTB ^= (1<<bit);
                printf("LED số %d sáng: ", bit);
                print_binary(PORTB);
                Sleep(500);
                PORTB ^= (1<<bit);
                bit--;
                break;
        }
    }
    return 0;
}