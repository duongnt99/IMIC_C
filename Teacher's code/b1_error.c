// Bài tập 1: Phân loại mã lỗi
// •	Đề bài: Viết hàm int connect_database(int db_id) trả về:
// o	0 nếu thành công.
// o	-1 nếu db_id không hợp lệ (ví dụ: số âm).
// o	-2 nếu "hết thời gian chờ" (timeout). 
// o	Trong main, gọi hàm và in ra thông báo lỗi chi tiết tương ứng.

#include<stdio.h>

int connect_database(int db_id)
{
    if (db_id<0)
    {
        return -1; //Lỗi ID không hợp lệ
    }
    else if(db_id>100){
        return -2; //Giả lập lỗi timeout cho ID lớn
    }
    return 0;
}

int main()
{
    int result = connect_database(-5); // Thử với giá trị lỗi là 150>100

    switch (result)
    {
    case 0:
        printf("Connect successfully\n");
        break;
    case -1:
        printf("Error: Invalid DB \n");
        break;
    case -2:
        printf("Error: Connection timeout \n");
        break;
    default:
        printf("Unknown err \n");
        break;
    }
    return 0;
}