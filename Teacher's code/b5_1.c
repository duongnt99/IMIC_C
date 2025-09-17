// •	Đề bài: Viết chương trình yêu cầu người dùng nhập một câu và lưu vào file output.txt.
#include<stdio.h>
#include<stdlib.h>

int main()
{
    FILE *fptr;
    char text_append[256];

    //Mở file ở chế độ nối
    fptr = fopen("output.txt", "a");

    //Kiểm tra xem file có mở thành công không
    if (fptr == NULL)
    {
        printf("Khong the mo file");
        exit(1);
    }

    printf("Input sentence: ");
    fgets(text_append, sizeof(text_append), stdin); // Đọc câu mà người dùng nhập

    //Ghi câu vào file
    fputs(text_append, fptr);

    // Đóng file
    fclose(fptr);

    printf("Successful");
    return 0;
    
}