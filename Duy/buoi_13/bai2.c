#include <stdio.h>

void timMax(int arr[], int *size){
    int max = -999999;
    int index;
    for(int i=0; i<*size; i++){
        if(*(arr+i) > max){
            max = *(arr+i);
            index = i;
        }
    }
    printf("Phần tử lớn nhất trong mảng là: %d\n", max);
    printf("Chỉ số có giá trị lớn nhất là: %d\n", index);
}

int main(){
    int arr[] = {0,1,2,3,4,5,6,7,8,9};
    int n = sizeof(arr) / sizeof(arr[0]);
    timMax(arr, &n);
    return 0;
}