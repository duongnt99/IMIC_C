#include <stdio.h>
#include <stdlib.h>

int main(){
    FILE *fptr;
    fptr = fopen("output.txt", "r");
    
    if(fptr == NULL){
        printf("Không mở được file");
        exit(1);
    }

    int c;
    int count_line = 0;

    for(c = getc(fptr); c != EOF; c = getc(fptr)){
        if(c == '\n'){
            count_line ++;
        }
    }

    if(count_line > 0 || ftell(fptr) > 0){
        fseek(fptr, -1, SEEK_END);
        if( fgetc(fptr) != '\n'){
            count_line ++;
        }
    }

    fseek(fptr, 0, SEEK_END);
    if(ftell(fptr) == 0){
        count_line = 0;
    }

    fclose(fptr);

    printf("%d\n", count_line);
    printf("Successful");
    return 0;
}