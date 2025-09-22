// •	Đề bài: Viết chương trình đọc nội dung từ file output.txt đã tạo ở Bài 1 và hiển thị ra màn hình.

#include<stdio.h>
#include<stdlib.h>

int main()
{
    FILE *fptr;
    char c;

    //Mở file ở chế độ đọc
    fptr = fopen("output.txt", "r");
    // chế độ ghi thì mode = a

    //Kiểm tra xem file có mở thành công không
    if (fptr == NULL)
    {
        printf("Khong the mo file");
        exit(1);
    }

    printf("Noi dung file: ");

    //Đọc nội dung từ file và in ra màn hình từng kí tự
    c = fgetc(fptr);

    while (c != EOF)
    {
        printf("%c", c);
        c = fgetc(fptr); 
    }
    
    // Đóng file
    fclose(fptr);

    printf("Successful");
    return 0;
    
}