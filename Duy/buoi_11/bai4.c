#include <stdio.h>

int main(){
    int arr[10] = {1,2,3,4,5,6,7,8,9,10};
    int x;
    printf("Nhập 1 số cần tìm: ");
    scanf("%d", &x);
    int a = 0, b = 9;
    int check = 0;
    while(a<=b){
        int n = (a+b)/2;
        if(x == arr[n]){
            check =1;
            break;
        }
        else if(x>arr[n]){
            a = n+1;
        }
        else{
            b = n-1;
        }
    }
    if(check == 1){
        printf("Đã tìm thấy x");
    }
    else{
        printf("Không tìm thấy x");
    }
}