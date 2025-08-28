#include <stdio.h>
#include <stdint.h>

void printBinary(uint8_t val)
{
    for (int i=7; i>=0; i--)
    {
        printf("%d", (val>>i)&1);
    }
}

int main()
{
    uint8_t PortB = 0x00;
    int i=0;
    while (i<=7) {
     PortB =(1<<i);
     printBinary(PortB);
     printf("\n");
     i++;    
    }
    return 0;
}