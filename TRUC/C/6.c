//dieu khien den LED
#include<stdio.h>
#include<stdint.h>
int main (){
    int i = 7;
    uint8_t PORTA = 0x00;
    //turn on LED 0,3,7
    PORTA =( 1 << 0)| (1<<3)| (1<<7);
    //PORTA = 00000000
    //PORAT = 00000001 << 0 = 00000001
    //PORTA = 00000001 << 3 = 00001000
    //PORTA = 00000001 << 7 = 10000000
    //PORTA = 10001001

    // turn off led 3
    PORTA &=~(1<<3) ;//tuc la 00001000
    //PORTA =10001001
    //PORTA & 11110111 (~(00001000)) => 10000001 (chi con 7 va 0 Sang)

    //dao LED 1 tu 0 sang 1(su dung XOR giong nhau = 0 , khac =1)
    PORTA ^= (1<<1) ;//PORTA = 1000001^000000010 (1<<1) =>10000011

printf("gia tri cuoi cung cua PORTA :");
    for (i =7 ; i>=0; i--){
        printf("%d",(PORTA >>i)& 1);
    }
    printf("\n");
return 0;
}