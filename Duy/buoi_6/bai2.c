#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <errno.h>
#include <limits.h>
#include <ctype.h>


int main(){
    char input[256];
    char *endptr;
    long value;

    printf("Nhập một số để chuyển: ");
    if (!fgets(input, sizeof(input), stdin)){
        printf("Không đọc được kí tự");
        return 1;
    }

    input[strcspn(input, "\n")] = '\0';

    errno = 0;
    value = strtol (input, &endptr, 10);

    long temp_result = value /2;
    if(endptr == input){
        printf("không có số được tìm thấy");
        return 1;
    }
    if(*endptr != '\0'){
        printf("Ký tự không hợp lệ");
        return 1;
    }
    while(*endptr && isspace((unsigned char)*endptr)){
        endptr++;
    }
    if (value == LONG_MIN || value == LONG_MAX){
        printf("Tràn giá trị");
        return 1;
    }

    printf("Chuyển đổi thành công: %ld\n", value);
    printf("%ld", temp_result);
    return 0;
}