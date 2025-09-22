#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct bai3
{
    int id;
    char name[100];
    double prize;
}Product;

int main(){
    int n;
    printf("Nhap 1 chi so: ");
    scanf("%d", &n);
    getchar();

    FILE *fptr;
    Product product;
    fptr = fopen("Products.dat", "rb");

    if(fptr == NULL){
        printf("Khong mo duoc file");
        exit(1);
    }

    fseek(fptr, n*sizeof(Product), SEEK_SET);

    size_t item = fread(&product, sizeof(Product), 1, fptr);
    
    if(item == 1){
        printf("ID: %d, Ten: %s, Gia: %.2f\n", product.id, product.name, product.prize);
    }
    else{
        printf("Doc that bai");
    }

    fclose(fptr);
    return 0;
}