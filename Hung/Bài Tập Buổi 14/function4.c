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