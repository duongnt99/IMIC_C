#include <stdio.h>

void tinhTong (int arr[], int n){
    int tong = 0;
    for(int i=0; i<n; i++){
        tong += arr[i];
    }
    printf("Tổng các phần tử của mảng là: %d", tong);
}
int main(){
    int arr[] = {0,1,2,3,4,5,6,7,8,9};
    int n = sizeof(arr) / sizeof(arr[0]);
    tinhTong(arr, n);
    return 0;
}