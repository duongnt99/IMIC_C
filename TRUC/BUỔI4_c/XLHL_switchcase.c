#include<stdio.h>
int main(){
    float diemTB;
    printf("nhap diem TB:");
    scanf("%f",&diemTB);

    int intdiemTB = (int) diemTB; //SWitch-case trong C chỉ hoạt động kiểu int/char
    switch (intdiemTB)
    {
    case 10:
    case 9:
        printf("xuất sắc:");
        break;
    case 8:
        printf("giỏi:");
        break;
    case 7:
    case 6:
        if (diemTB >= 6.5){
            printf("khá");
        } else{
        printf("TB:");
        }
        break;    
    case 5:
        printf("TB");   
        break;
    default:
        if(diemTB<5.0){
            printf("yếu:");
        } else{
            printf("TB:");
        }
        break;
    }
}



