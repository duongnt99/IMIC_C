#include <stdio.h>
#include <string.h>
int main()
{
    int age; // tạo một biến age và khai báo vùng nhớ cho nó
    char full_name[100]; // Ho va ten

    printf("Nhap ho ten: ");
    // fgets đọc cả dòng, bao gồm tất cả ký tự của dòng đó, kể cả dấu /n
    fgets(full_name, sizeof(full_name), stdin);
    

    age = 0;
    
    printf("Nhap tuoi: ");
    scanf("%d", &age);

    printf("Thong tin cua ban la:\n");
    printf("Ho va ten: %s, Tuoi: %d \n", full_name, age);
    return 0;
}