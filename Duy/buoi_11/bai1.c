#include <stdio.h>

int main(){
    int n;
    printf("Nhập số lượng phần tử trong mảng: ");
    scanf("%d", &n);
    int arr[n];
    for(int i = 0; i < n; i++){
        printf("Nhập phần tử thứ %d: ", i+1);
        scanf("%d", &arr[i]);
    }
    long int tong = 0;
    for(int i = 0; i < n; i++){
        tong += arr[i];
    }
    printf("Tổng các phần tử trong mảng là: %ld", tong);
}