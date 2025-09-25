// Bài tập 3: Định nghĩa hằng số toán học
// •	Đề bài: Sử dụng #define để định nghĩa hằng số PI là 3.14159. 
// Viết một chương trình tính chu vi và diện tích hình tròn với bán kính cho trước

#include<stdio.h>

#define PI 3.14159

int main()
{
    double r = 5.0;
    double chu_vi = 2*PI*r;
    double dien_tich = PI*r*r;

    printf("chu vi: %.2f\n", chu_vi);
    printf("dien tich: %.2f\n", dien_tich);
    return 0;
}