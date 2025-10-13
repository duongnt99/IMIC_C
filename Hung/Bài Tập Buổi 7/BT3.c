// Viết một chương trình xử lý một "lô" gồm 5 tác vụ. 
// Dùng vòng lặp for để gọi hàm int process_item(int item_id) 5 lần. 
// Nếu có bất kỳ tác vụ nào thất bại (hàm trả về -1), chương trình phải dừng vòng lặp ngay lập tức và báo cáo ID của tác vụ bị lỗi.
#include <stdio.h>

int process_item(int item_id)
{
    if(item_id == 3)
    {
        return -1;
    }
    return 0;
}

int main()
{
    int result;
    for(int i = 1; i <= 5; i++)
    {
        result = process_item(i);
        if(result == -1)
        {
            printf("Tac vu %d bi loi, xu ly khong thanh cong",i);
            break;
        }
        else
        {
            printf("Tac vu %d thanh cong\n",i);
        }
    }
    return 0;
}