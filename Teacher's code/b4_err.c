// Bài tập 4: Lồng các hàm kiểm tra lỗi
// •	Đề bài: Viết một hệ thống 3 lớp: controller(), service(), repository().
// o	repository() trả về -1 nếu không thể truy cập "dữ liệu".
// o	service() gọi repository(). Nếu repository() lỗi, service() cũng trả về -1.
// o	controller() gọi service(). Nếu service() lỗi, controller() in thông báo lỗi.
// o	Đây là mô hình "lan truyền lỗi" (error propagation)..

#include<stdio.h>

int repository()
{
    printf("Repo... Accessing");
    return -1; //Giả lập lỗi
}

int service()
{
    printf("Service... Proccessing");
    if (repository() == -1)
    {
        printf("Service detected err");
        return -1;
    }
    return 0;
}

int controller()
{
    printf("Controller... Handing");
    if (service() == -1)
    {
        printf("Service detected err in lower layer");
    }
    else
    {
        printf("Controller successful");
    }
    return 0;
}

int main()
{
    controller();
    return 0;
}