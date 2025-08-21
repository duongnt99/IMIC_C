#include <stdio.h>

int main()
{
    int age; // tạo một biến age và khai báo vùng nhớ cho nó
    char initial; // Chữ cái đầu trong tên

    // printf("Nhap tuoi: ");
    // scanf("%d", &age);
    // printf("Nhap chu cai dau: ");
    // scanf(" %c", &initial); //thêm khoảng trắng phía trước %c để dọn dẹp bộ đệm

    printf("Nhap tuoi: ");
    scanf("%d", &age);
    getchar(); //Đọc và loại bỏ kí tự \n thừa
    printf("Nhap chu cai dau: ");
    scanf("%c", &initial); //thêm khoảng trắng phía trước %c để dọn dẹp bộ đệm
    
    printf("Tuoi: %d, chu cai dau: %c \n", age, initial);
    return 0;
}