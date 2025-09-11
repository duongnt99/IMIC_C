#include <stdio.h>
#include <stdint.h>
#include <unistd.h> 

int main() {
    uint8_t PORTD = 0x00;  
    int state = 0;  // 0=đỏ, 1=xanh, 2=vàng

    while (1) {
        switch (state) {
            case 0: // Đỏ
                PORTD = 0b00000001;  // bật LED đỏ (bit 0)
                printf("DEN DO -> DUNG\nPORTD = ");
                break;
            case 1: // Xanh
                PORTD = 0b00000100;  // bật LED xanh (bit 2)
                printf("DEN XANH -> DI\nPORTD = ");
                break;
            case 2: // Vàng
                PORTD = 0b00000010;  // bật LED vàng (bit 1)
                printf("DEN VANG -> CHUAN BI\nPORTD = ");
                break;
        }

        // In PORTD dạng nhị phân
        for (int i = 7; i >= 0; i--) {
            printf("%d", (PORTD >> i) & 1);
        }
        printf("\n");

        if (state == 0) sleep(5);     // đỏ 5s
        else if (state == 1) sleep(5); // xanh 5s
        else if (state == 2) sleep(2); // vàng 2s

        // Chuyển trạng thái tiếp theo
        state = (state + 1) % 3;
    }

    return 0;
}

