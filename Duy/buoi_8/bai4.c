#include <stdio.h>
#include <stdlib.h>

int main(){
    FILE *fptr_copy;
    FILE *fptr_paste;

    fptr_copy = fopen("output.txt", "r");
    fptr_paste = fopen("destination.txt", "w");
    
    char c;
    if(fptr_copy == NULL){
        printf("File output.txt không tồn tại");
        exit(1);
    }
    if(fptr_paste == NULL){
        printf("Không mở được file destination.txt");
        exit(1);
    }

    c = fgetc(fptr_copy);
    while(c != EOF){
        fputc(c, fptr_paste);
        c = fgetc(fptr_copy);
    }

    fclose(fptr_copy);
    fclose(fptr_paste);

    printf("Successful");
    return 0;
}