#include <stdio.h>
#include <stdint.h>
#include <windows.h>

void print_binary(uint8_t PORT){
    for(int i=7; i>=0; i--){
        printf("%d", (PORT>>i)&1);
    }
    printf("\n");
}

void binary(uint8_t PORT, int n){
    int bit = 0;
    int d;
    while(bit<=7){
        d = n%2;
        n/=2;
        PORT |= (d<<bit);
        if((n==0)&&(d==0)){
            break;
        }
        bit++;
    }
    print_binary(PORT);
}

int main(){
    uint8_t PORTC = 0x00;
    int n = 253;
    while(1){
        printf("%d :", n);
        binary(PORTC, n);
        n++;
        if(n>255){
            n=0;
        }
        Sleep(500);
    }
    return 0;
}

