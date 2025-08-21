#include <stdio.h>
#include <stdint.h>

int main(){
    uint8_t PORTA = 0x00;
    PORTA |= (1<<0) | (1<<3) | (1<<7);
    
    PORTA &= ~(1<<3);
    
    PORTA ^= (1<<1);

    printf("PORTA: ");
    for(int i=7; i>=0; i--){
        printf("%d", (PORTA>>i)&1);
    }
    return 0;
}