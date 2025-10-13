// Bài tập 4: Macro đa dòng
// •	Đề bài: Viết một macro đa dòng PRINT_DEBUG(msg) in ra một thông báo gỡ lỗi có định dạng. Sử dụng ký tự \ để nối các dòng

#include<stdio.h>

#define PRINT_DEBUG(msg) \
    do{ \
        printf(" %s\n", msg); \
    } while (0)

int main()
{
    PRINT_DEBUG("Bat dau chuong trinh");

    if (1)
        PRINT_DEBUG("Trong khoi if");
    else
        PRINT_DEBUG("Trong khoi else"); // khong thực thi

    return 0;
    
}