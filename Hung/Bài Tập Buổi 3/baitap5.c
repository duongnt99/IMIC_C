#include <stdio.h>
#include <stdint.h>
int main(){
    // nhiet do phong
    int16_t nhietdo = -235.0;
    // dien ap pin
    int16_t dienap = 375.0;
    // trang thai led
    uint8_t led = 1;   // 1 = ON, 0 = OFF
    printf("nhiet do phong: %.1f C\n",nhietdo/10.0);
    printf("dien ap pin: %.2f V\n",dienap/100.0);
    printf("trang thai led: %s",led ? "ON" : "OFF");
    return 0;
}