// Bài tập 1: Lưu Mảng Struct vào File Nhị phân
// •	Đề bài: Tạo một struct Product và một mảng 5 sản phẩm. Ghi toàn bộ mảng này vào file products.dat bằng một lệnh fwrite() duy nhất..

#include<stdio.h>
#include<stdlib.h>
#include<string.h>

typedef struct 
{
    int id;
    char name[50];
    double price;
} Product;

int main()
{
    FILE *fptr;
    Product product[3]; //Sử dụng 3 sản phẩm

    //Khởi tạo dữ liệu
    product[0] = (Product){100,"Laptop Dell", 215};
    product[1] = (Product){101,"Ban phim", 150};
    product[2] = (Product){102,"Chuot", 50};

    //Mở file 
    fptr = fopen("products.dat", "wb");

    //Kiểm tra xem file có mở thành công không
    if (fptr == NULL)
    {
        printf("Khong the mo file");
        exit(1);
    }

    //Ghi toàn bộ mảng vào file
    size_t items = fwrite(product, sizeof(Product), 3, fptr);
    if (items == 3)
    {
        printf("Success\n");
    }else{
        printf("Error");
    }

    fclose(fptr);
    return 0;
    
}