//quan li bien voi kieu du lieu khac nhau trong lap trinh nhung:
#include <stdio.h>
#include<stdint.h>

int main() {
    
    int8_t nhietdo = -235;
    uint16_t dienappin = 375;
    uint32_t led = 1;
    printf("Nhiet do: %.1f C\n",nhietdo/10.0);
    printf("Dien ap pin: %.2f V\n", dienappin/100.0);
    printf("Trang thai LED: %s\n", led? "ON" :"OFF");
    return 0;
}
