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
    Product *product_from_file; //dùng con trỏ trỏ tới mảng động
    long file_size;
    int num_products;


    //Mở file 
    fptr = fopen("products.dat", "rb");

    //Kiểm tra xem file có mở thành công không
    if (fptr == NULL)
    {
        printf("Khong the mo file");
        exit(1);
    }

    // Xử lý bài 5 luôn
    fseek(fptr, 0, SEEK_END); // Di chuyển con trỏ đến cuối file
    file_size = ftell(fptr);// Lấy vị trí hiện tại, cũng là kích thước file

    rewind(fptr);  //Quay về đầu file

    num_products = file_size/ sizeof(Product); //Số lượng sản phẩm trong file

    printf("File co %d san pham\n", num_products);

    //Cấp phát mảng động thông qua malloc
    product_from_file = (Product*)malloc(num_products*sizeof(Product));

    if (product_from_file == NULL)
    {
        printf("Loi cap phat bo nho");
        fclose(fptr);
        exit(1);
    }
    

    //Ghi toàn bộ mảng vào file
    size_t items_read = fread(product_from_file, sizeof(Product), num_products, fptr);

    fclose(fptr);

    if (items_read == num_products)
    {
        printf("Cac san pham: \n");
        for (int i = 0; i < num_products; i++)
        {
            printf("ID: %d, Ten: %s, Gia: %.2f\n",
                product_from_file[i].id,
                product_from_file[i].name,
                product_from_file[i].price
            );
        }
        
    }else{
        printf("Error");
    }

    free(product_from_file); //Giải phóng bộ nhớ
    return 0;
    
}