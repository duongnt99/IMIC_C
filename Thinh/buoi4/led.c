// Có 8 LED gắn vào PORTB. Viết chương trình dùng vòng lặp while để LED sáng lần lượt từ LED0 → LED7, sau đó dừng.
// Yêu cầu:
// 	•	Sử dụng dịch bit (<<) để bật LED theo thứ tự.
// 	•	In ra trạng thái PORTB mỗi bước.

#include <stdio.h>
#include <stdint.h>   // để dùng kiểu uint8_t

// Hàm in một số 8 bit dưới dạng nhị phân
void print_binary(uint8_t value) {
    for (int i = 7; i >= 0; i--) {
        printf("%d", (value >> i) & 1);  // dịch phải và lấy bit
    }
}

int main() {
    uint8_t PORTB = 0x00;   // giả lập thanh ghi PORTB (8 bit, ban đầu = 0)
    int i = 0;

    // LED sáng lần lượt từ LED0 đến LED7
    while (i < 8) {
        PORTB = (1 << i);   // dịch bit 1 sang trái i lần → bật LED i
        printf("Buoc %d: PORTB = ", i);
        print_binary(PORTB);   // in ra dạng nhị phân
        printf("\n");
        i++;
    }

    return 0;
}
