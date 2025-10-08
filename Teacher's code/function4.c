// Bài tập 4: Tìm ký tự trong chuỗi (trả về con trỏ)
// •	Đề bài: Viết hàm find_char(const char *str, char ch) nhận vào một chuỗi và một ký tự, 
// trả về một con trỏ đến lần xuất hiện đầu tiên của ký tự đó trong chuỗi, hoặc NULL nếu không tìm thấy.
#include<stdio.h>
char* find_char(const char *str, char ch)
{
    while (*str != '\0')
    {
        if (*str == ch)
        {
            //Trả về địa chỉ của ký tự đó
            // Ép kiểu vì str là const char *str còn hàm trả về char*
            return (char*) str;
        }
        //Di chuyển đến ký tự tiếp theo
        str++;
        
    }
    return NULL;
    
}

int main()
{
    const char *my_str = "Practice C IMIC";
    char char_to_find = 'c';

    char *found_position = find_char(my_str, char_to_find);
    
    printf("Tim thay tai dia chi %p.\n", found_position);
    
    return 0;
}