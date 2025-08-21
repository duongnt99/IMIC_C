#include <stdio.h>
#include <stdint.h>

int main(){
    int16_t temperature = -235;
    uint16_t volatage = 375;
    uint8_t ledState = 1; //1=ON; 0=OFF

    printf("Gia tri nhiet do: %.1f C \n", temperature/10.0);
    printf("Gia tri dien ap: %.2f V \n",volatage/100.0 );
    printf("Trang thai led: %d \n", ledState? "ON" : "OFF");

    return 0;

}