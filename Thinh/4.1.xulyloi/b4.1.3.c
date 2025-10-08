// Bài tập 3: Xử lý lỗi trong vòng lặp
// •	Đề bài: Viết một chương trình xử lý một "lô" gồm 5 tác vụ. 
//     Dùng vòng lặp for để gọi hàm int process_item(int item_id) 5 lần. 
//     Nếu có bất kỳ tác vụ nào thất bại (hàm trả về -1), 
//     chương trình phải dừng vòng lặp ngay lập tức và báo cáo ID của tác vụ bị lỗi.

#include <stdio.h>

// Giả lập hàm xử lý tác vụ
int process_item(int item_id) 
{
    // giả sử giá trị thất bại của item id
    if (item_id == 7) 
    {
        return -1; 
    }
    return 0;
}

int main() 
{
    int result;
    int err_found = 0;
    for (int i = 1; i <= 5; i++) 
    {
        result = process_item(i);
        if (result == -1) 
        {
            printf("Tac vu %d that bai!\n", i);
            err_found = 1;
            break; // dừng vòng lặp
        }
         else 
        {
            printf("Tac vu %d thanh cong.\n", i);
        }
    }

    if(!err_found)
    {
        printf("Tat ca tac vu thanh cong");
    }
    return 0;
}
