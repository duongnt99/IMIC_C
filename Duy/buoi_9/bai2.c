#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct bai2
{
    int id;
    char name[100];
    double prize;
}Product;

int main(){
    FILE *fptr;
    Product product[3];

    fptr = fopen("Products.dat", "rb");
     
    if(fptr == NULL){
        printf("Khong the mo file");
        exit(1);
    }

    size_t items = fread(product, sizeof(Product), 3, fptr);
    
    if (items == 3){
        for(int i=0; i<3; i++){
        printf("ID: %d, Ten: %s, Gia: %.2f\n", product[i].id, product[i].name, product[i].prize);
        }
    }
    else{
        printf("Doc that bai");
    }
    fclose(fptr);
    return 0;
}