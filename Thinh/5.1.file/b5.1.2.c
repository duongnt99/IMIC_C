// Bài tập 2: Đọc và Hiển thị File
// •	Đề bài: Viết chương trình đọc nội dung từ file output.txt đã tạo ở Bài 1 và hiển thị ra màn hình.

#include <stdio.h>
#include <stdlib.h>

int main() {
    FILE *fptr;
    char ch;

    // Mở file ở chế độ đọc
    fptr = fopen("output.txt", "r");
    if (fptr == NULL) {
        printf("Không thể mở file output.txt\n");
        exit(1);
    }

    printf("Noi dung file: ");
    // Đọc từng ký tự cho tới khi gặp EOF (End Of File)
    ch = fgetc(fptr);
    
    while (ch != EOF) {
        printf("%c", ch);
        ch = fgetc(fptr);
    }

    // Đóng file
    fclose(fptr);

    printf("Successful");
    return 0;
}
