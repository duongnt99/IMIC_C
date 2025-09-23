#include <stdio.h>
#include <stdlib.h>

int main(){
    FILE *fptr;
    char c;

    fptr = fopen("output.txt", "r");

    if(fptr == NULL){
        printf("Lỗi không đọc dược file");
        exit(1);
    }

    printf("Nội dung của file là: ");

    c = fgetc(fptr);

    while(c != EOF){
        printf("%c", c);
        c = fgetc(fptr);
    }

    fclose(fptr);
    return 0;
}