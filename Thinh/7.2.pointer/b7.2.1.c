// Bài tập 1: Tìm số lớn hơn và hoán đổi giá trị hai biến bằng con trỏ
// •	Đề bài: Viết chương trình nhập vào hai số nguyên. Sử dụng con trỏ để tìm và in ra số lớn hơn sau đó hoán đổi giá trị của hai số nguyên đó

#include <stdio.h>

int main() {
    int a, b;
    int *pa, *pb;

    // Nhập hai số nguyên
    printf("Nhap so thu nhat: ");
    scanf("%d", &a);
    printf("Nhap so thu hai: ");
    scanf("%d", &b);

    // Gán địa chỉ cho con trỏ
    pa = &a;
    pb = &b;

    // Tìm và in ra số lớn hơn
    if (*pa > *pb)
        printf("So lon hon la: %d\n", *pa);
    else
        printf("So lon hon la: %d\n", *pb);

    // Hoán đổi giá trị bằng con trỏ
    int temp = *pa;
    *pa = *pb;
    *pb = temp;

    // In ra sau khi hoán đổi
    printf("Sau khi hoan doi:\n");
    printf("a = %d\n", a);
    printf("b = %d\n", b);

    return 0;
}
