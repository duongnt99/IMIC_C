#include <stdio.h>

void chiaPhanTu(int *arr, int size, int div, int *quotients, int *remainders){
    if(div == 0){
        printf("Không thể thực hiện phép chia với 0");
    }
    else{
        int i = 0;
        while(i<size){
            quotients[i] = arr[i]/div;
            remainders[i] = arr[i]%div;
            i++;
        }
        printf("Giá trị mảng quotients là: ");
        for(int j=0; j<size; j++){
            printf("%d ", quotients[j]);
        }
        printf("\n");
        printf("Giá trị mảng remainders là: ");
        for(int j=0; j<size; j++){
            printf("%d ", remainders[j]);
        }
        printf("\n");
    }
}

int main (){
    int n;
    printf("Nhập số phần tử của mảng: ");
    scanf("%d", &n);
    int arr[n];
    for(int i=0; i<n; i++){
        scanf("%d", &arr[i]);
    }
    int div;
    printf("Nhập số bị chia: ");
    scanf("%d", &div);
    int quotients[n];
    int remainders[n];
    chiaPhanTu(arr, n, div, quotients, remainders);
    return 0;
}