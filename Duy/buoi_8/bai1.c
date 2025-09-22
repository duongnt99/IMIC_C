#include <stdio.h>
#include <stdlib.h>

int main(){
    FILE *fptr;
    char sentence[256];

    fptr = fopen("output.txt", "w");

    if(fptr == NULL){
        printf("Không mở được file");
        exit(1);
    }

    printf("Nhập một câu: ");
    fgets(sentence, sizeof(sentence), stdin);

    fprintf(fptr, "%s", sentence);

    fclose(fptr);

    printf("Successful");
    return 0;
}