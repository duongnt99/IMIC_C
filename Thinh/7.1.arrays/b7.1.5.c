// Bài tập 5: Tính tổng các phần tử trên đường chéo chính của ma trận vuông
// •	Đề bài: Cho một ma trận vuông (số hàng bằng số cột), tính tổng các phần tử nằm trên đường chéo chính (từ trên cùng bên trái xuống dưới cùng bên phải)

#include <stdio.h>

int main() {
    int n;
    printf("Nhap cap cua ma tran vuong (n x n): ");
    scanf("%d", &n);

    int a[n][n];
    printf("Nhap cac phan tu cua ma tran:\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            printf("a[%d][%d] = ", i, j);
            scanf("%d", &a[i][j]);
        }
    }

    int sum = 0;
    for (int i = 0; i < n; i++) {
        sum += a[i][i];   // phần tử trên đường chéo chính có hàng = cột
    }

    printf("Tong cac phan tu tren duong cheo chinh = %d\n", sum);
    return 0;
}
