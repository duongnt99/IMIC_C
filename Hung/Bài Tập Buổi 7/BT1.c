// Viết hàm int connect_database(int db_id) trả về:
// o	0 nếu thành công.
// o	-1 nếu db_id không hợp lệ (ví dụ: số âm).
// o	-2 nếu "hết thời gian chờ" (timeout). Trong main, gọi hàm và in ra thông báo lỗi chi tiết tương ứng.

#include <stdio.h>


int connect_database(int db_id)
{
    if(db_id < 0)
    {
        return -1; //loi ID khong hop le
    }
    else if(db_id > 100)
    {
        return -2; //gia lap loi timeout cho ID lon
    }
    return 0;
}

int main()
{
    int result = connect_database(-5); // thu voi gia tri loi la 150 > 100
    switch (result)
    {
    case 0:
        printf("Connect successfully\n");
        break;
    case -1:
        printf("Eror: invailid DB\n");
        break;
    case -2:
        printf("Eror: connection timeout\n");
        break;
    default:
        printf("unknow err\n");
        break;
    }
    return 0;
}