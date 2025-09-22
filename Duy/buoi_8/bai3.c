#include <stdio.h>
#include <stdlib.h>

int main(){
    FILE *fptr;
    char sentence[256];
    fptr = fopen("output.txt", "a");

    if(fptr == NULL){
        printf("File không tồn tại");
        exit(1);
    }

    printf("Intput sentence: ");
    fgets(sentence, sizeof(sentence), stdin);

    fprintf(fptr, "%s", sentence);
    
    fclose(fptr);
    
    printf("Successfull");

    return 0;
}