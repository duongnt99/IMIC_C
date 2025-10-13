// Bài tập 3: Đọc một Record Cụ thể
// •	Đề bài: Viết chương trình cho phép người dùng nhập vào một chỉ số (ví dụ: 1, tương ứng sản phẩm thứ hai) và 
// chỉ đọc thông tin sản phẩm đó từ file products.dat bằng fseek().



// Làm cách nào để đọc toàn bộ file và nhập chỉ số bất kỳ không giới hạn (nằm trong khoảng từ 0 đến num products)

// 1. Mở file
// 2. Tính kích thước của file -> fseek và ftell để biết
// 3. Suy ra số sản phẩm = file_size / sizeof(Product)
// 4. Nhập chỉ số
// 5. Chỉ số hợp lệ thì dùng fseek nhảy đến vị trí cần đọc và fread để đọc sản phẩm


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
    Product single_product; 
    long file_size;
    int num_products;
    int index; //chỉ số


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


    if (num_products == 0)
    {
        printf("File rong");
        fclose(fptr);
        return 0;
    }
    

    printf("Nhap chi so san pham (0 ... %d): \n", num_products-1);
    scanf("%d", &index);

    if (index <0 || index>=num_products)
    {
        printf("Chi so khong hop le \n");
        fclose(fptr);
        return 0;
    }

    // Di chuyển con trỏ đến vị trí record cần đọc
    fseek(fptr, index*sizeof(Product), SEEK_SET);

    //Đọc một record duy nhất
    fread(&single_product, sizeof(Product), 1,fptr);

    fclose(fptr);

    printf("Thong tin san pham tai chi so %d \n", index);
    printf("ID: %d, Ten: %s, Gia: %.2f\n",
                single_product.id,
                single_product.name,
                single_product.price
            );
    
    return 0;
    
}