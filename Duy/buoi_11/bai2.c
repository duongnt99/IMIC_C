#include <stdio.h>

int main(){
    int max = -99999, min = 99999;
    int n;
    printf("Nhập số lượng phần tử trong mảng: ");
    scanf("%d", &n);
    int arr[n];
    for(int i = 0; i < n; i++){
        printf("Nhập phần tử thứ %d: ", i+1);
        scanf("%d", &arr[i]);
    }
    for(int i=0; i < n; i++){
        if(arr[i] < min){
            min = arr[i];
        }
        if(arr[i] > max){
            max = arr[i];
        }
    }
    printf("Số lớn nhất trong mảng là: %d\n", max);
    printf("Số nhỏ nhất trong mảng là: %d\n", min);

    int m;
    for(int i=0; i < n/2; i++){
        m = arr[n-1-i];
        arr[n-1-i] = arr[i];
        arr[i] = m;
    }
    for(int i=0; i < n; i++){
        printf("%d ", arr[i]);
    }
}