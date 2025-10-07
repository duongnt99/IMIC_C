#include <stdio.h>

int main(){
    int n;
    printf("Nhập số phần tử trong mảng: ");
    scanf("%d", &n);
    int arr[n];
    for(int i = 0; i < n; i++){
        scanf("%d", &arr[i]);
    }
    for(int i=0; i<n-1; i++){
        for(int j=0; j<n-1-i; j++){
            if(arr[j+1]>arr[j]){
                int m = arr[j+1];
                arr[j+1] = arr[j];
                arr[j] = m; 
            }
        }
    }
    for(int i=0; i<n; i++){
        printf("%d ", arr[i]);
    }
    return 0;
}