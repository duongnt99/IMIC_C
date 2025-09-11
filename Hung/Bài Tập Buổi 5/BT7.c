#include <stdio.h>
#include <stdint.h>
#include <unistd.h>
void nhiphan(uint8_t n)
{
    for(int i = 7; i >= 0; i--)
    {
        printf("%d",(n >> i) &1);
    }
    printf("\n");
}
int main(){
    uint8_t PORTB = 0x00;
    while(1){
        for(int i = 0; i <= 7; i++)
        {
            PORTB = (1 << i);
            nhiphan(PORTB);
            sleep(2);
        }
        for(int i = 6;i >= 0 ;i--)
            {
                PORTB = (1 << i);
            nhiphan(PORTB);
            sleep(2);
            }
        }
    return 0;
}