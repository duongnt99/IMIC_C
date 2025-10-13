// Bài tập 5: Điều khiển động cơ và lỗi errno
// •	Đề bài: Viết một hàm driver int set_motor_pwm(int duty_cycle) để cài đặt chu kỳ xung PWM cho một động cơ. 
// Giá trị duty_cycle hợp lệ là từ 0 đến 100. Bất kỳ giá trị nào ngoài khoảng này đều là lỗi.
// •	Yêu cầu:
// •	Trong hàm set_motor_pwm:
// o	Nếu duty_cycle nằm ngoài khoảng [0, 100], hàm phải trả về -1 và đặt errno = EDOM (Domain Error).
// o	Nếu hợp lệ, hàm gán giá trị vào một thanh ghi giả lập PWM_REG và trả về 0.
// •	Trong main, yêu cầu người dùng nhập giá trị duty_cycle.
// •	Gọi hàm set_motor_pwm. Nếu hàm trả về lỗi, hãy dùng perror để in ra một thông báo lỗi thân thiện.

#include<stdio.h>
#include<stdint.h>
#include<errno.h>

//Giả lập thanh ghi của VĐK
uint8_t PWM_REG;

int set_motor_pwm(int duty_cycle) //
{
    //Kiểm tra tham số đầu vào
    if (duty_cycle <0 || duty_cycle>100)
    {
        errno = EDOM;
        return -1;
        /* code */
    }
    PWM_REG = (uint8_t) duty_cycle;
    return 0;
    
}

int main()
{
    int input_duty;
    printf("Enter motor PWM");
    scanf("%d", &input_duty);
    errno = 0;
    if (set_motor_pwm(input_duty) == -1)
    {
        perror("Failed");
        /* code */
    }else{
        printf("Successfull %d", PWM_REG);
    }
    
}