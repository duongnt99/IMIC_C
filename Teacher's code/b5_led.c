// Bài tập 5: Dịch LED chạy từ trái sang phải
// Mô tả: Có 8 LED gắn vào PORTB. Viết chương trình dùng vòng lặp while để LED sáng lần lượt từ LED0 → LED7, sau đó dừng.
// Yêu cầu:
// 	•	Sử dụng dịch bit (<<) để bật LED theo thứ tự.
// 	•	In ra trạng thái PORTB mỗi bước.

#include<stdio.h>
#include<stdint.h>

void printBinary(uint8_t val)
{
    for(int i =7; i>=0; i--)
    {
        printf("%d", (val>>i) & 1); // dịch phải bit, dịch tất cả của val sang phải i vị trí, -> bit ở vị trí i sẽ bị đẩy về cuối cùng
        // Sau đó thực hiện phép AND bit với 1 (00000001)
    }
    printf("\n");
}

int main()
{
    uint8_t PORTB = 0x00; // Tất cả led đều tắt
    int i =0; // Theo dõi vị trí của led cần bật

    while (i<8)
    {
        PORTB = (1<<i); // Dịch trái bit, lấy giá trị của số 1 (00000001) và dịch bit 1 sang trái i vị trí, các vị trí trống sẽ là 0
        printBinary(PORTB); // In trang j thái của portB ra dạng nhị phân
        i++;
    }
    return 0;
}