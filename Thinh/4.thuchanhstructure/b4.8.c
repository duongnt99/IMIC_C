// Bài tập 8: Bộ đếm nhị phân 8-bit
// •	Đề bài: Có 8 LED được gắn vào PORTC. Viết chương trình để các LED hiển thị một bộ đếm nhị phân từ 0 đến 255.
// o	Khi bắt đầu, tất cả LED đều tắt (tương ứng số 0).
// o	Sau đó, các LED sẽ sáng lên để biểu diễn các số 1, 2, 3,... theo hệ nhị phân.
// o	Khi đếm đến 255 (tất cả 8 LED đều sáng), bộ đếm sẽ tự động quay trở lại 0 và bắt đầu lại.
// •	Yêu cầu:
// o	Sử dụng vòng lặp vô hạn while(1) để bộ đếm chạy liên tục.
// o	Bên trong, sử dụng vòng lặp for để chạy biến đếm từ 0 đến 255.
// o	Gán trực tiếp giá trị của biến đếm vào thanh ghi PORTC.
// o	In ra giá trị của PORTC ở cả dạng thập phân và nhị phân ở mỗi bước.
// o	Thêm một khoảng trễ để quan sát được sự thay đổi..

#include<stdio.h>
#include<stdint.h>
#include<unistd.h>

//Hàm in giá trị 8 bit ra nhị phân
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
    uint8_t PORTC = 0x00;
    while (1) //Vòng lặp vô hạn để đếm từ đầu
    {
        for (int i = 0; i < 255; i++)
        {
            PORTC = i; // Gán giá trị của i vào biến PORTC

            printf("Dem: %3d | PORT C:", i); //Căn lề cho dễ nhìn
            printBinary(PORTC);
            printf("\n");

            sleep(2); // Ngừng chương trình trong 2s
        }
        // Sau khi mà for kết thúc, vòng lặp while chạy lại từ đầu
        // for tiếp tục chạy lại từ  i =0
        
    }

    return 0;
    
}