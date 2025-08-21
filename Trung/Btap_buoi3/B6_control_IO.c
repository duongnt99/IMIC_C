#include <stdio.h>
#include <stdint.h>
int main()
{
    uint8_t PortA = 0x00;

    // bật LED 0, 3, 7
    PortA |= (1 << 0) | (1 << 3) | (1 << 7);

    // tắt LED 3
    PortA &= ~(1 << 3);

    // đảo LED 1
    PortA ^= (1 << 1);

    //xuất PortA ra dạng nhị phân
      
    printf("%c", (PortA & 0x80)? '1' : '0');
    printf("%c", (PortA & 0x40)? '1' : '0');
    printf("%c", (PortA & 0x20)? '1' : '0');
    printf("%c", (PortA & 0x10)? '1' : '0');
    printf("%c", (PortA & 0x08)? '1' : '0');
    printf("%c", (PortA & 0x04)? '1' : '0');
    printf("%c", (PortA & 0x02)? '1' : '0');
    printf("%c", (PortA & 0x01)? '1' : '0');

    
    return 0;

}
    
