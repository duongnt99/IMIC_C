#include <stdio.h>

int main(){
    int n;
    printf("Nhập số hàng và số cột của ma trận vuông: ");
    scanf("%d", &n);
    float arr[n][n];
    for(int i=0; i<n; i++){
        printf("Nhập các phần tử hàng %d: ", i+1);
        for(int j=0; j<n; j++){
            scanf("%f", &arr[i][j]);
        }
    }

    int tong = 0;
    for(int i=0; i<n; i++){
        tong += arr[i][i];
    }
    
    printf("Tổng đường chéo của mảng là: %d", tong);
    return 0;
}
