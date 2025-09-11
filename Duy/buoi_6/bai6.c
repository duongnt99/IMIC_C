#include <stdio.h>
#include <windows.h>

int read_temperature_sensor(float *temp, int *flag){
    float value;
    printf("Giá trị vào là: ");
    scanf("%f", &value);
    if((value >= -200) && (value <= 200)){
        *temp = value;
        *flag = 0;
        return *flag;
    }
    else if((value >= -1000) && (value <= 1000) && ((value <= -200) || (value >= 200))){
        *flag = -1;
        return *flag;
    }
    else{
        *flag = -2;
        return *flag;
    }
}

int main(){
    float temp = 0;
    int flag = 0;
    while(1){
        read_temperature_sensor(&temp, &flag);
        if(flag == 0){
            printf("Nhiệt độ hiện tại là: %f\n", temp);
        }
        else if(flag == -1){
            printf("Cảm biến chưa sẵn sàng\n");
        }
        else{
            printf("Mất kết nối với thiết bị");
            break;
        }
    }
    return 0;
}