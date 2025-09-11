#include <stdio.h>

int main() {
    int h,i,j;
    printf("Nhap chieu cao tam giac: ");
    scanf("%d", &h);

    for (i = 1; i <= h; i++) {
        // In khoảng trắng
        for (j = 1; j <= h - i; j++) {
            printf(" ");
        }
        // In dấu *
        for (j = 1; j <= 2 * i - 1; j++) {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}
