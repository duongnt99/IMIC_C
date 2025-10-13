// Bài tập 1: Phân biệt perror và strerror
// •	Đề bài: Viết một chương trình cố tình tạo ra lỗi EDOM (ví dụ acos(2.0)). 
//     Sau đó, in thông báo lỗi ra màn hình 2 lần: một lần dùng perror và một lần dùng printf với strerror. 
//     Quan sát sự khác biệt.

#include<stdio.h>
#include<math.h>
#include<errno.h>
#include<string.h>
#include<stdlib.h>

int main()
{
    errno = 0;
    acos(2.0);// acos chỉ xác định trong khoảng từ -1 đến 1, đây là lỗi EDOM
    
    if (errno = EDOM)
    {
        printf("Using perror \n");
        perror("acos(2.0) failed");

        printf("Using perror \n");
        printf("Detail err: %s\n", strerror(errno));
    }
    return 0;

}