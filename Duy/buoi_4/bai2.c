#include <stdio.h>

int main(){
    float diem;
    printf("Nhập điểm: ");
    scanf("%f", &diem);

    if((diem<=10)&&(diem>=9)){
        printf("Xuất sắc");
    }
    else if((diem<9)&&(diem>=8)){
        printf("Giỏi");
    }
    else if((diem<8)&&(diem>=6.5)){
        printf("Khá");
    }
    else if((diem<6.5)&&(diem>=5)){
        printf("Trung bình");
    }
    else{
        printf("Yếu");
    }
    return 0;
}