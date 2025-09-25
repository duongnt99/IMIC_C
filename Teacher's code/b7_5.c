// Bài tập 5: Tính tổng các phần tử trên đường chéo chính của ma trận vuông
// •	Đề bài: Cho một ma trận vuông (số hàng bằng số cột), 
// tính tổng các phần tử nằm trên đường chéo chính (từ trên cùng bên trái xuống dưới cùng bên phải)
#include<stdio.h>

int main()
{
    int n, sum = 0;

    printf("Nhap kich thuoc cua ma tran: ");
    scanf("%d", &n);

    int arr[n][n];

    for(int i=0; i<n;i ++)
    {
        for(int j=0; j<n;j++)
        {
            printf("Nhap phan tu thu arr[%d][%d]: ",i, j);
            scanf("%d", &arr[i][j]);
        }
    }

    for (int i = 0; i < n; i++)
    {
       sum+= arr[i][i]; //Phần tử ở đường chéo chính
    }

    printf("Tong: %d\n", sum);
    return 0;
    
}