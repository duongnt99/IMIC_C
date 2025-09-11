#include <stdio.h>
#include <stdint.h>
#include <windows.h>

void printBinary(uint8_t a)
{
    for(int i=7;i>=0;i--)
    {
        printf("%d", (a>>i)&1);
    }
    printf("\n");
}

int main()
{
    uint8_t PORTB = 0x00;
    while (1){
    for (int i=0;i<=6;i++)
    {PORTB = (1<<i);
    printBinary(PORTB);
    Sleep(500);
    }
    for (int i=7;i>=1;i--)
    {PORTB = (1<<i);
    printBinary(PORTB);
    Sleep(500);
    }
}}