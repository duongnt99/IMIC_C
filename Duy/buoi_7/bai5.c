#include <stdio.h>
#include <stdint.h>
#include <errno.h>

uint8_t PWM_REG;

void display_PWM_REG(uint8_t PWM_REG){
    printf("Giá trị của thanh ghi PWM_REG là: ");
    for(int i=7; i>=0; i--){
        printf("%d", (PWM_REG>>i)&1);
    }
}

int set_motor_pwm(int pwm){
    errno = 0;
    if((pwm>=0) && (pwm<=100)){
        PWM_REG = pwm;
        return 0;
    }
    else{
        errno = EDOM;
        return -1;
    }
}

int main(){
    int pwm;
    printf("Nhập giá trị của chu kỳ: ");
    scanf("%d", &pwm);
    if(set_motor_pwm(pwm) == 0){
        printf("Đã gán giá trị PWM\n");
        display_PWM_REG(PWM_REG);
    }
    else{
        perror("Lỗi");
    }
    return 0;
}