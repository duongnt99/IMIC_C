// Bài tập 2: Chuyển đổi Chuỗi thành Số An toàn
// •	Đề bài: Sử dụng hàm strtol để chuyển đổi một chuỗi do người dùng nhập vào thành một số nguyên kiểu long. 
// Kiểm tra xem toàn bộ chuỗi có được chuyển đổi thành công hay không.

#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<errno.h>
#include<limits.h>
#include<ctype.h> //isspace

int main()
{
    char input[256]; //mảng chứa chuỗi nhập
    char *endptr;
    long value;

    // Xử lý chuỗi ....
    printf("Nhap mot so de chuyen: ");
    if (!fgets(input,sizeof(input),stdin))
    {
        printf("Khong doc duoc ky tu");
        return 1;
    }

    // Xóa newline 
    input[strcspn(input, "\n")] = '\0'; // strcspn(input, "\n") trả về số ký tự đầu tiên không thuộc tập \n và gán \0 để cắt
    
    
    errno = 0;
    value = strtol(input,&endptr,10); //đọc phần số theo cơ số 10, endptr là con trỏ, trỏ tới ký tự đầu tiên không thuộc phần số

    long temp_result = value/2;

    //kiểm tra chuỗi hợp lệ qua các hàm in lỗi tự định nghĩa
    //Nếu không chuyển được kí tự nào
    if (endptr == input)
    {
        printf("Khong co so duoc tim thay");
        return 1;
    }

    // Nếu có kí tự lạ đằng sau cái chuỗi mà không phải là số
    if (*endptr != '\0')
    {
        printf("Ky tu khong hop le");
        return 1;
    }
    
    // Bỏ qua khoảng trắng
    while (*endptr && isspace((unsigned char)*endptr))
    {
        endptr++;
    }
    // Kiểm tra tràn số
    if (value == LONG_MIN || value == LONG_MAX )
    {
        printf("Tran gia tri");
        return 1;
    }

    printf("Chuyen doi thanh cong: %ld\n", value);
    printf("%ld", temp_result);
    return 0;
    
}