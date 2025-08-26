
// dạng 1 dùng cấu truc if else if else
#include<stdio.h>
int main(){
float điểm;
printf("nhap diem TB:");
scanf("%f",&điểm);
if (điểm >= 9.0)
{
printf("xep loai: xuat sac\n");
} else if (điểm >= 8.0){
    printf("xep loai: gioi\n");
} else if (điểm >= 6.5){
    printf("xep loai: kha\n");
} else if (điểm >= 5.0){
    printf("xep loai :trung binh\n");
} else {
    printf("xep loai : yeu\n");
}
    return 0;
}



