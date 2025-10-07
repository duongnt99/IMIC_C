#include <stdio.h>
#include <stdlib.h>

int num;
int *arr;

int task(){
    int n;
    printf("Nhập chức năng mà bạn muốn sử dụng:\n1. Nhập mảng\n2. Xuất mảng\n3. Sắp xếp mảng\n4. Thoát\n");
    printf("Nhập chức năng: ");
    scanf("%d", &n);
    if((n<=0) || (n>4)){
        printf("Vui lòng chọn lại chức năng!");
        task();
    }
    return n;
}

void array_input(){
    printf("Nhập số lượng phần tử: ");
    scanf("%d", &num);
    arr = (int*)malloc(num*sizeof(int));
    printf("Nhập các phần tử của mảng: ");
    for(int i=0; i<num; i++){
        scanf("%d", &arr[i]);
    }
}

void array_output(int arr[], int n){
    for(int i=0; i<n; i++){
        printf("%d ", arr[i]);
    }
    printf("\n");
}

void arrage_array(int arr[], int n){
    for(int i=0; i<n-1; i++){
        for(int j=0; j<n-i-1; j++){
            if(arr[j] > arr[j+1]){
                int a = arr[j+1];
                arr[j+1] = arr[j];
                arr[j] = a; 
            }
        }
    }
}
 
int main(){
    int n;
    do{
        n = task();
        switch(n){
            case 1:
                array_input();
                break;
            case 2:
                array_output(arr, num);
                break;
            case 3:
                arrage_array(arr, num);
                break;
        }
    } while(n != 4);
    return 0;
}