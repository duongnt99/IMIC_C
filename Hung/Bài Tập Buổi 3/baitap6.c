#include <stdio.h>
#include <stdint.h>
int main(){
    int i = 7;
    uint8_t PORTA;
    PORTA = 0X00;
    // bat led chan so 0,3,7
    PORTA |= (1 << 0); // 0000 0001 bat led so 0
    PORTA |= (1 << 3); // 0000 1001 bat led so 3
    PORTA |= (1 << 7); // 1000 1001 bat led so 7
    // tat led chan so 3   1000 1001  >> 1000 0001
    //                   & 1111 0111  >> 0000 1000 = ~ (1 << 3)
    //                   = 1000 0001
    PORTA &= ~(1 << 3);
    // dao trang thai led chan so 1
    //   1000 0001 >> 1000 0011
    // | 0000 0010
    // = 1000 0011
    PORTA ^= (1 << 1); 
    printf("gia tri cuoi cung cua PORTA :");
    for (i; i>=0; i--){
        printf("%d",(PORTA >>i)& 1);
    }
    printf("\n");
    return 0;
}