#include <stdio.h>
#include <stdlib.h>

int main(){
    FILE *fptr;
    fptr = fopen("output.txt", "r");
    
    if(fptr == NULL){
        printf("Không mở được file");
        exit(1);
    }

    fseek(fptr, 0, SEEK_END);
    if(ftell(fptr) == 0){
        printf("File khong co ky tu");
    }
    else{
        printf("File co so ky tu la: %ld\n", ftell(fptr));
    }

    fclose(fptr);

    printf("Successful");
    return 0;
}