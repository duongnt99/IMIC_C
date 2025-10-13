#include <stdio.h>
#include <stdlib.h>

typedef struct 
{
    int id;
    char name[50];
    double price;
} Product;

int main()
{
    FILE *fptr;
    int index;
    double new_price;
    Product temp;
    long offset;

    // Mở file đọc/ghi nhị phân
    fptr = fopen("products.dat", "r+b");
    if (fptr == NULL)
    {
        perror("Khong the mo file");
        exit(1);
    }

    // Người dùng nhập chỉ số sản phẩm cần cập nhật
    printf("Nhap chi so san pham (bat dau tu 0): ");
    scanf("%d", &index);

    printf("Nhap gia moi: ");
    scanf("%lf", &new_price);

    // Tính vị trí cần nhảy đến trong file
    offset = index * sizeof(Product);

    // Di chuyển con trỏ đến vị trí sản phẩm cần sửa
    if (fseek(fptr, offset, SEEK_SET) != 0)
    {
        printf("Khong the di chuyen den vi tri nay trong file.\n");
        fclose(fptr);
        return 1;
    }

    // Đọc bản ghi hiện tại
    if (fread(&temp, sizeof(Product), 1, fptr) != 1)
    {
        printf("Khong the doc san pham tai chi so %d\n", index);
        fclose(fptr);
        return 1;
    }

    // giá mới
    temp.price = new_price;

    // ghi đè record
    fseek(fptr, offset, SEEK_SET);

    //cập nhật vào file
    fwrite(&temp, sizeof(Product), 1, fptr);

    printf("Da cap nhat san pham ID %d - Ten: %s -> Gia moi: %.2f\n",
           temp.id, temp.name, temp.price);

    fclose(fptr);
    return 0;
}
