// Bài 6: Mô phỏng đèn giao thông bằng switch-case
// Mô tả:
// Có 3 LED gắn vào PORTD:
// 	•	LED đỏ → bit 0
// 	•	LED vàng → bit 1
// 	•	LED xanh → bit 2

// Chương trình mô phỏng hoạt động của đèn giao thông:
// 	1.	Đỏ sáng 5s → dừng.
// 	2.	Xanh sáng 5s → đi.
// 	3.	Vàng sáng 2s → chuẩn bị.
// 	4.	Quay lại đỏ.

// Yêu cầu:
// 	•	Dùng biến state để lưu trạng thái đèn (0=Đỏ, 1=Xanh, 2=Vàng).
// 	•	Dùng switch-case để xử lý bật/tắt LED tương ứng.
// 	•	In ra giá trị PORTD dạng nhị phân để kiểm tra.
// 	•	Dùng vòng lặp vô hạn while(1) để đèn chạy mãi.

#include<stdio.h>
#include<stdint.h>
#include<unistd.h> //Dùng sleep() trên linux/mac, Sleep() nếu là windows

void printBinary(uint8_t val) //In ra giá trị nhị phân của thanh ghi PORTD
{
    for(int i=7; i>=0; i--)
    {
        printf("%d", (val>>i) &1);
    }
    printf("\n");
}

int main()
{
    uint8_t PORTD = 0x00;

    int state = 0; // 0=Đỏ, 1= Xanh, 2=Vàng
    while (1)
    {
        switch(state)
        {
            case 0: //Đèn đỏ
                PORTD = (1<<0); //Bật led đỏ
                printf("Trang thai: Do \n");
                printBinary(PORTD);
                Sleep(5); //Mô phỏng 5s đèn đỏ
                state = 1; //Chuyển sang đèn xanh
                break;
            case 1: //Đèn xanh
                PORTD = (1<<2); //Bật led xanh
                printf("Trang thai: Xanh \n");
                printBinary(PORTD);
                Sleep(5); //Mô phỏng 5s đèn xanh
                state = 2; //Chuyển sang đèn vàng
                break;
            case 2: //Đèn vàng
                PORTD = (1<<1); //Bật led vàng
                printf("Trang thai: Vang \n");
                printBinary(PORTD);
                Sleep(2); //Mô phỏng 5s đèn vàng
                state = 0; //Chuyển sang đèn đỏ
                break;
        }
    }
    return 0;
}
