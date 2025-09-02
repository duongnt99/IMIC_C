#include <stdio.h>
#include <stdint.h>
#include <windows.h>

void printBinary(uint8_t a)
{
    for(int j=7;j>=0;j--)
    {
        printf("%d", (a>>j)&1);
    }
    printf("\n");
}

int main()
{
    uint8_t PORTC = 0x00;
    while (1){
    for (int i=0;i<=255;i++)
    {PORTC = i;
    printf("Gia tri nhi phan: "); 
    printBinary(PORTC);
    printf("Gia tri thap phan: %d", PORTC);
    printf("\n");
    Sleep(500);
    }
}}