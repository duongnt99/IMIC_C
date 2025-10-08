// Bài tập 7: Hiệu ứng LED chạy qua lại (Knight Rider/K.I.T.T Scanner)
// •	Đề bài: Có 8 LED được gắn vào PORTB. Viết chương trình để tạo hiệu ứng một bóng LED sáng chạy từ trái sang phải (LED0 → LED7), sau đó ngay lập tức chạy ngược lại từ phải sang trái (LED7 → LED0). Quá trình này lặp lại vô tận.
// •	Yêu cầu:
// o	Sử dụng vòng lặp vô hạn while(1) để hiệu ứng chạy mãi mãi.
// o	Bên trong, sử dụng hai vòng lặp for lồng nhau:
// o	Một vòng lặp for để dịch bit sang trái (<<) từ LED0 đến LED7.
// o	Một vòng lặp for để dịch bit sang phải (>>) từ LED7 về lại LED0.
// o	Thêm một khoảng trễ nhỏ giữa mỗi bước dịch để có thể quan sát được hiệu ứng.
// o	In ra trạng thái của PORTB ở mỗi bước dưới dạng nhị phân..

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
    uint8_t PORTD;
    while (1) //Vòng lặp vô hạn
    {
        //Chạy từ trái sang phải (LED 0 -> LED 7)
        PORTD = 0b00000001; //Bắt đầu từ led số 0 (1<<0)
        for (int i = 0; i < 7; i++)
        {
            printf("Trai -> Phai: ");
            printBinary(PORTD); //In giá trị nhị phân
            sleep(1);
            PORTD = PORTD<<1; //Dịch trái 1 bit
        }

        //Chạy từ phải sang trái (LED 7 -> 0)
        //PORTD đang ở giá trị 0b10000000
        for (int i = 0; i < 7; i++)
        {
            printf("Phai -> Trai: ");
            printBinary(PORTD); //In giá trị nhị phân
            sleep(1);
            PORTD = PORTD>>1; //Dịch trái 1 bit
        }
        
    }
    return 0;
}