// Bài tập 6: Đọc cảm biến nhiệt độ với mã lỗi trả về
// •	Đề bài: Giả lập một hàm int read_temperature_sensor(int *temp_value) để đọc nhiệt độ từ một cảm biến. Cảm biến này có thể gặp hai loại lỗi: chưa sẵn sàng để đọc, hoặc bị ngắt kết nối. Hàm sẽ trả về trạng thái hoạt động, và nếu thành công, giá trị nhiệt độ sẽ được lưu vào biến temp_value.
// •	Yêu cầu:
// •	Viết hàm read_temperature_sensor trả về:
// o	0 nếu đọc thành công.
// o	-1 nếu cảm biến chưa sẵn sàng (lỗi tạm thời).
// o	-2 nếu cảm biến bị ngắt kết nối (lỗi nghiêm trọng).
// •	Trong main, hãy dùng một vòng lặp while(1) để liên tục đọc cảm biến.

#include<stdio.h>
#include<stdint.h>
#include<unistd.h>
#include<stdlib.h>
#include<time.h>

//Giả lập driver đọc cảm biến
// int *temp_value là một cách trả về 2 giá trị: một là mã trạng thái (return) hoặc là giá trị nhiệt độ thông qua con trỏ
int read_temperature_sensor(int *temp_value)
{
    int status = rand()%100;

    if (status<70) //70% khả năng thành công
    {
       *temp_value = 25+ (rand()%10); //Nhiệt độ ngẫu nhiên từ 25 đến 34
       return 0;
    }
    else if (status<90) //20% chưa sẵn sàng
    {
        return -1; // Not ready
    }
    else{
        return -2; //10% ngắt kết nối
    }
    
}

int main()
{
    srand(time(0)); //Khởi tạo bộ sinh số ngẫu nhiên
    int current_temp;

    while (1)
    {
        printf("Read sensor...\n");
        int return_code = read_temperature_sensor(&current_temp);

        switch(return_code)
        {
            case 0:
                printf("Success! Temp: %d \n", current_temp);
                break;
            case -1:
                printf("Not ready ...\n");
                break;
            case -2:
                printf("Disconneted ...\n");
                goto end_loop; //Dùng gôt nhảy đến end_loop
            default:
                printf("Unknown err ...\n");
                break;
        }
        sleep(2);
        
    }

    end_loop:
        printf("System halted");
        return 0;
    
}