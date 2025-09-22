#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct bai1
{
    int id;
    char name[100];
    double prize;
} Product;

int main(){
    FILE *fptr;
    Product product[3];
    product[0] = (Product){100, "Laptop", 200};
    product[1] = (Product){101, "Chuot", 150};
    product[2] = (Product){102, "Ban phim", 100};

    fptr = fopen("Products.dat", "wb");
    if(fptr == NULL){
        printf("Khong the mo file");
        exit(1);
    }
    
    size_t items = fwrite(product, sizeof(Product), 3, fptr);
    if(items == 3){
        printf("Success\n");
    }
    else{
        printf("Error");
    }
    return 0;
}