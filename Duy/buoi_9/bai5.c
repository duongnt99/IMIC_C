#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct bai4
{
    int id;
    char name[100];
    double prize;
}Product;

int main(){
    Product product[3];

    FILE *fptr;
    fptr = fopen("Products.dat", "rb");
    
    if(fptr == NULL){
        printf("Khong mo duoc file");
        exit(1);
    }

    fseek(fptr, 0, SEEK_END);

    printf("Kich thuoc cua file la: %ld", ftell(fptr));

    fclose(fptr);

    return 0;
}