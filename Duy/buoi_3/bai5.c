#include <stdio.h>
#include <stdint.h>

int main (){
    int16_t NhietDo = 327;
    uint16_t DienAp = 500;
    uint8_t LED = 1;

    printf("Nhiệt độ phòng là: %.1f\n", NhietDo/10.00);
    printf("Điện áp pin là: %.2f\n", DienAp/100.00);
    printf("Trạng thái LED: %s", (LED=1)?"ON":"OFF");
    return 0;
}