#include <stdio.h>
#include <stdint.h>
#include <windows.h>

void printB(uint8_t a)
{
    for (int i=7;i>=0;i--)
    {printf("%d", (a>>i)&1);}
    printf("\n");
}

int main ()
{
    uint8_t PortD = 0x00;
    int state = 0;
    while (1) {
        switch (state) {
        case 0:
        PortD = 1; // bật đèn Đỏ
        printf("Den do dung lai! \n");
        printB(PortD);
        Sleep(5000);
        state = 1;
        break;
        
        case 1:
        PortD = (1<<2); // bật đèn Xanh
        printf("Den xanh di! \n");
        printB(PortD);
        Sleep(5000);
        state = 2;
        break;
        
        case 2:
        PortD = (1<<1); // bật đèn Vàng
        printf("Den vang cham lai! \n");
        printB(PortD);
        Sleep(2000);
        state = 0;
        break;
    }}
    return 0;
}