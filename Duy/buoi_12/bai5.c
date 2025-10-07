#include <stdio.h>
#include <string.h>

int search(char str[], char *c){
    int count = 0;
    while(*(str+count) != '\0'){
        if(*(str+count) == *c){
            return count;
        }
        count++;
    }
    return -1;
}

int main(){
    char str[1000];
    printf("Nhập 1 chuỗi bất kỳ: ");
    fgets(str, 1000, stdin);
    char c;
    printf("Nhập ký tự cần tìm trong chuỗi: ");
    scanf("%c", &c);
    if(search(str, &c) >= 0){
        printf("Đã tìm thấy ký tự cần tìm trong chuỗi\n");
        printf("Ký tự cần tìm nằm ở vị trí %p\n", str + search(str, &c));
    }
    else{
        printf("NULL");
    }
    return 0;
}