#include <stdio.h>
#include <stdlib.h>

int main() {
    int N;
    int a = 0, b = 1;
    printf("Nhap so phan tu N: ");
    scanf("%d", &N);  
    printf("chuoi fibonacci:");
    // In N phan tu cua so Fibonacci
    for (int i = 1; i <= N; i++) {
        if (i == 1) {
            printf("%d", a);    // 0
        } else if (i == 2) {
            printf(" %d", b);  // 1
        } else {
            int next = a + b;
            printf(" %d", next);
            a = b;
            b = next;
        }
    }
    printf("\n");
    return 0;
}
