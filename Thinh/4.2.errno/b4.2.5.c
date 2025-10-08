// Bài tập 5: Điều khiển động cơ và lỗi errno
// •	Đề bài: Viết một hàm driver int set_motor_pwm(int duty_cycle) để cài đặt chu kỳ xung PWM cho một động cơ. Giá trị duty_cycle hợp lệ là từ 0 đến 100. Bất kỳ giá trị nào ngoài khoảng này đều là lỗi.
// •	Yêu cầu:
// •	Trong hàm set_motor_pwm:
// o	Nếu duty_cycle nằm ngoài khoảng [0, 100], hàm phải trả về -1 và đặt errno = EDOM (Domain Error).
// o	Nếu hợp lệ, hàm gán giá trị vào một thanh ghi giả lập PWM_REG và trả về 0.
// •	Trong main, yêu cầu người dùng nhập giá trị duty_cycle.
// •	Gọi hàm set_motor_pwm. Nếu hàm trả về lỗi, hãy dùng perror để in ra một thông báo lỗi thân thiện

#include<stdio.h>
#include<stdint.h>
#include<errno.h>

//Giả lập thanh ghi của vi điều khiển
uint8_t PWM_REG;

// Hàm driver cài đặt PWM duty cycle
int set_motor_pwm(int duty_cycle) {
    if (duty_cycle < 0 || duty_cycle > 100) {
        errno = EDOM;   // lỗi miền giá trị
        return -1;      // báo lỗi
    }
    PWM_REG = duty_cycle;  // ghi giá trị vào thanh ghi giả lập
    return 0;              // thành công
}

int main() {
    int duty, ret;

    printf("Nhap duty_cycle (0-100): ");
    scanf("%d", &duty);

    ret = set_motor_pwm(duty);

    if (ret == -1) {
        perror("Loi khi cai dat PWM");  // in lỗi thân thiện
    } else {
        printf("PWM da duoc cai dat thanh cong: %d%%\n", duty);
    }

    return 0;
}
