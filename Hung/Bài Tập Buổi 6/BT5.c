// Nhập một số nguyên dương và in ra các thừa số nguyên tố của nó. 
// Ví dụ: 12 = 2 * 2 * 3
#include <stdio.h>

int main() {
    int n;
    printf("Nhap mot so nguyen duong: ");
    scanf("%d", &n);

    if (n <= 0) {
        printf("So phai la so nguyen duong!\n");
        return 0;
    }

    printf("%d = ", n);

    for (int i = 2; i * i <= n; i++) {
        while (n % i == 0) {

            printf("%d*", i);
            n /= i;
        }
    }

    // nếu còn lại số nguyên tố lớn hơn 1
    if (n > 1) {
        printf("%d", n);
    }
    printf("\n");
    return 0;
}


