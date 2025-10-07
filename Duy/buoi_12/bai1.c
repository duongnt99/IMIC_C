#include <stdio.h>

void max_swap(int *ptr1, int *ptr2){
    if(*ptr1 > *ptr2){
        printf("Số lớn nhất là: %d\n", *ptr1);
    }
    else if(*ptr1 < *ptr2){
        printf("Số lớn nhất là: %d\n", *ptr2);
    }
    else {
        printf("2 số bằng nhau\n");
    }
    int number = *ptr1;
    *ptr1 = *ptr2;
    *ptr2 = number;
    printf("Giá trị 2 số sau khi hoán đổi là: %d %d\n", *ptr1, *ptr2);
}

int main(){
    int a, b;
    int max;
    printf("Nhập vào 2 số nguyên bất kì: ");
    scanf("%d %d", &a, &b);
    max_swap(&a, &b);
    return 0;
}