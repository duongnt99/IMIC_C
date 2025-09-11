#include <stdio.h>

int unreliable_task(int percent){
    if(percent > 70){
        return -1;
    }
    else{
        return 0;
    }
}

int main(){
    int percent;
    printf("Nhập phần trăm mã lỗi: ");
    scanf("%d", &percent);
    int time = 1;
    while(time <= 3){
        if(unreliable_task(percent) == -1){
            time++;
            if(time > 3){
                printf("Cả 3 lần thử đều thất bại!");
                break;
            }
                        printf("Lần thử lần thứ %d thất bại, nhập lần tiếp theo: ", time-1);
            scanf("%d", &percent);
        }
        else{
            printf("Thành công!");
            break;
        }
    }
    return 0;
}