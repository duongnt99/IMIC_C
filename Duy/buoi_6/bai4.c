#include <stdio.h>

int repository(int n){
    printf("Repo đang chạy ...\n");
    if(n < 0){
        return -1;
    }
    else{
        return 0;
    }
}

int service(int n){
    printf("Service đang chạy ...\n");
    if(repository(n) < 0){
        printf("Repo có lỗi!!!\n");
        return -1;
    }
    else{
        return 0;
    }
}

int controller(int n){
    printf("Controller đang chạy...\n");
    if(service(n) < 0){
        printf("Có lỗi ở các lớp dưới");
        return -1;
    }
    else{
        printf("Chương trình chạy thành công!");
        return 0;
    }
}

int main(){
    int n;
    printf("Nhập 1 mã số: ");
    scanf("%d", &n);
    controller(n);
    return 0;
}