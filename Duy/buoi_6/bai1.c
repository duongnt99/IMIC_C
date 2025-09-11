#include <stdio.h>

int connect_database(int db_id){
    if(db_id < 0){
        return -1;
    }
    else if(db_id > 100){
        return -2;
    }
    else{
        return 0;
    }
}

int main(){
    int db_id;
    printf("Nhập db_id: ");
    scanf("%d", &db_id);
    switch (connect_database(db_id)){
        case -2:
            printf("Hết thời gian chờ!");
            break;
        case -1:
            printf("db_id không hợp lệ!");
            break;
        case 0:
            printf("Thành công!");
            break;
        default:
            printf("Lỗi không xác định!");
            break;
    }
    return 0;
}