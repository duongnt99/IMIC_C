#include <stdio.h>

int process_item(int item_id){
    printf("Đang thực thi lệnh %d ...\n", item_id);
    if(item_id == 9){
        return -1;
    }
    return 0;
}

int main(){
    int err_found = 0;
    for(int i=1; i<=5; i++){
        if(process_item(i) == -1){
            printf("Lỗi ở câu lệnh có ID %d", i);
            err_found = 1;
            break;
        }
    }
    if(!err_found){
        printf("Tất cả các câu lệnh được thực hiện thành công");
    }
    return 0;
}