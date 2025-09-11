#include <stdio.h>
#include <stdint.h>
#include <unistd.h>   

// Hàm in ra số nhị phân 8 bit
void nhiphan(uint8_t n)
{
    for(int i = 7; i >= 0; i--)
    {
        printf("%d", (n >> i) & 1);
    }
}

int main() {
    uint8_t PORTC = 0x00;  // ban đầu tất cả LED tắt

    while(1)  
    {
        for(int i = 0; i <= 255; i++)
        {
            PORTC = i;   
            printf("Thap phan: %d  |  Nhi phan: ", PORTC);
            nhiphan(PORTC);
            printf("\n");

            sleep(1); 
        }
    }

    return 0;
}
