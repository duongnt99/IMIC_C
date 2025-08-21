#include <stdio.h>
#include <stdint.h>
int main()
{
    int16_t t = -235; // giá trị vượt -128 nên phải khai báo 16 bit
    uint16_t u = 375; // giá trị dương vượt 256 nên phải khai báo 16 bit
    uint8_t led = 1;
        
    printf("Nhiet do: %.1f C \n", t/10.0); // chia 10 để chuyển về số thực (ép kiểu)
    printf("Dien ap: %.2f V \n", u/100.0);
    printf("Trang thai led: %s", led? "ON" : "OFF"); // điều kiện if-else khác 0 thì ON, =0 thì OFF
    
    return 0;
}