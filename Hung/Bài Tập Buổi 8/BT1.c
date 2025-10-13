// Viết một chương trình cố tình tạo ra lỗi EDOM (ví dụ acos(2.0)). 
// Sau đó, in thông báo lỗi ra màn hình 2 lần: một lần dùng perror và một lần dùng printf với strerror. 
// Quan sát sự khác biệt.
#include<stdio.h>
#include<math.h>
#include<errno.h>
#include<string.h>
#include<stdlib.h>

int main()
{
    errno = 0;
    double result = acos(2.0); // acos chỉ xác định trong khoảng [-1,1], đây là lỗi EDOM

    //Căn là sqrt, logarit thì là log

    if (errno == EDOM)
    {
        printf("Using perror \n");
        perror("acos(2.0) failed");

        printf("Using strerror \n");
        printf("Detaild err: %s\n", strerror(errno));
    }
    else if (isnan(result))
    {
        printf("Error: domain");
    }
    else
    {
        printf("Result %f\n", result);
    }
    return 0;
}