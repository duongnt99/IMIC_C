// Bài tập 3: Xử lý lỗi trong vòng lặp
// •	Đề bài: 
// Viết một chương trình xử lý một "lô" gồm 5 tác vụ. 
// Dùng vòng lặp for để gọi hàm int process_item(int item_id) 5 lần. 
// Nếu có bất kỳ tác vụ nào thất bại (hàm trả về -1), chương trình phải dừng vòng lặp ngay lập tức và báo cáo ID của tác vụ bị lỗi.

#include<stdio.h>

int process_item(int item_id)
{
    printf("Proccessing item ...");
    if (item_id == 7)
    {
       return -1; //Giả lập lỗi tại item thứ 3
    }
    return 0;
}

int main()
{
    int i;
    int err_found = 0;

    for(i = 1; i<=5; i++)
    {
        if (process_item(i) == -1)
        {
            printf("Failed to process in ID %d", i);
            err_found = 1;
            break;
        }
        
    }

    if (!err_found)
    {
        printf("All items proccessed");
    }
    return 0;
}