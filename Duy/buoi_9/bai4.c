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
    int n;
    double new_prize;
    printf("Nhap 1 chi so: ");
    scanf("%d", &n);
    printf("Nhap gia moi: ");
    scanf("%lf", &new_prize);
    Product product;

    FILE *fptr;
    fptr = fopen("Products.dat", "rb+");
    
    if(fptr == NULL){
        printf("Khong mo duoc file");
        exit(1);
    }

    fseek(fptr, n*sizeof(Product), SEEK_SET);

    fread(&product, sizeof(Product), 1, fptr);
    product.prize = new_prize;

    fseek(fptr, n*sizeof(Product), SEEK_SET);
    fwrite(&product, sizeof(Product), 1, fptr);

    fclose(fptr);

    printf("Da cap nhat gia moi");
    return 0;
}