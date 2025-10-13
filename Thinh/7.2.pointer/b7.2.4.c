// Bài tập 4: Đảo ngược chuỗi tại chỗ (in-place) bằng hai con trỏ
// •	Đề bài: Đảo ngược một chuỗi ký tự mà không sử dụng mảng phụ.
#include<stdio.h>
#include<string.h>

//có 1 con trỏ chạy từ đầu chuỗi, 1 con trỏ cuối chuỗi, và hoán đổi ký tự
void reverse_string(char *str)
{
    if (str == NULL)
    {
        return;// Kiểm tra sự hợp lệ của chuỗi
    }
    //có 1 con trỏ chạy từ đầu chuỗi, 1 con trỏ cuối chuỗi, và hoán đổi ký tự
    char *start = str; //Con trỏ tới đầu chuỗi
    char *end = str + strlen(str) - 1; //con trỏ trỏ tới cuối chuỗi
    char temp;

    //Lặp trong khi con trỏ đầu chưa vượt qua con trỏ cuối chuỗi
    while (start < end)
    {
        //Hoán đổi ký tự
        temp = *start;
        *start = *end;
        *end = temp;

        //Di chuyển con trỏ
        start++;;
        end--;
    }
    
    
}

int main()
{
    char string_to_reverse[] = "IMIC 2025";
    reverse_string(string_to_reverse);
    printf("Chuoi sau khi dao nguoc: %s\n", string_to_reverse);
    return 0;
}