// Bài tập 3: Tính độ dài và sao chép một chuỗi bằng con trỏ
// •	Đề bài: Chuỗi trong C là một mảng ký tự kết thúc bằng ký tự null \0. 
// Viết một hàm tính độ dài của chuỗi (không tính ký tự \0) bằng con trỏ. 
// Sau đó sao chép nội dung từ chuỗi nguồn (source) sang chuỗi đích (destination) bằng con trỏ

#include<stdio.h>

//Tính độ dài của chuỗi (không tính ký tự \0) -> dùng vòng while để kiểm tra, dùng con trỏ chạy đến khi gặp ký tự cuối
// sao chép chuỗi thông qua 2 con trỏ (gán, và di chuyển như bài mảng trước)

int string_length(const char *source)
{
    int length = 0;
    //Tính độ dài của chuỗi (không tính ký tự \0) -> dùng vòng while để kiểm tra, dùng con trỏ chạy đến khi gặp ký tự cuối '\0'
    while (*source != '\0')
    {
        length++;
        source++;//di chuyển con trỏ tới ký tự tiếp theo
    }
    return length;
    
}
void string_copy(char *des, const char *source)
{
    while (*source != '\0')
    {
        *des = *source; // Gán ký tự
        des++; //Di chuyển con trỏ của cả 2 chuỗi
        source++;//di chuyển con trỏ tới ký tự tiếp theo
    }
    // Thêm ký tự kết thúc chuỗi cho chuỗi đích
    *des = '\0';

}
int main()
{
    const char source_str[] = "Hello, World, IMIC!";
    char dest_str[50];

    //1. Tính độ dài
    int leng_str = string_length(source_str);
    printf("Do dai cua chuoi '%s' la: %d\n", source_str, leng_str);

    //2. Sao chép chuỗi
    string_copy(dest_str, source_str);
    printf("Chuoi  sau khi sao chep: '%s'\n", dest_str);
    return 0;
}