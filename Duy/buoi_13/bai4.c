#include <stdio.h>
#include <string.h>

int find_char(const char *str, char ch){
    int count = 0;
    while(*(str+count) != '\0'){
        if(*(str+count) == ch){
            return count;
        }
        count++;
    }
    return -1;
}

int main(){
    char str[1000];
    char ch;
    printf("Nhập 1 chuỗi kỹ tự: ");
    fgets(str, sizeof(str), stdin);
    printf("Nhập ký tự mà bạn muốn tìm: ");
    scanf("%c", &ch);
    if(find_char(str, ch) >= 0){
        printf("Đã tìm thấy ký tự: %p", (str + find_char(str, ch)));
    }
    else
    {
        printf("NULL");
    }
    return 0;
}