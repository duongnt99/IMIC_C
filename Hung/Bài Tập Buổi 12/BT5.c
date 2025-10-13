#include <stdio.h>

int main()
{
    int n, i, j;
    int sum = 0;

    printf("Nhap kich thuoc ma tran vuong (n x n): ");
    scanf("%d", &n);

    int matrix[n][n];

    // Nhập ma trận
    printf("Nhap cac phan tu cua ma tran:\n");
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            printf("matrix[%d][%d] = ", i, j);
            scanf("%d", &matrix[i][j]);
        }
    }

    // Tính tổng đường chéo chính
    for (i = 0; i < n; i++)
    {
        sum += matrix[i][i];
    }

    // In ma trận và kết quả
    printf("Ma tran vua nhap:\n");
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            printf("%5d", matrix[i][j]);
        }
        printf("\n");
    }

    printf("\nTong cac phan tu tren duong cheo chinh la: %d\n", sum);

    return 0;
}
