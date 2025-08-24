#include <stdio.h>
#include <stdint.h>

int main(){
    uint8_t PORTB = 0x00;
    int n = 0;
    printf("Nhấn để mở đèn");
    getchar();
    while(n<8){
        PORTB ^= (1<<(n-1));
        PORTB ^= (1<<n);
        printf("Led %d đã mở: ", n);
        for(int i=7; i>=0; i--){
            printf("%d", (PORTB>>i)&1);
        }
        n++;
        getchar();
    }
    return 0;
}