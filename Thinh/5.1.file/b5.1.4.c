// Bài tập 4: Sao chép File
// •	Đề bài: Viết chương trình sao chép toàn bộ nội dung của output.txt sang destination.txt

#include <stdio.h>
#include <stdlib.h>

int main() {
    FILE *fptr, *dest;
    char ch;

    fptr = fopen("output.txt", "r");
    if (fptr == NULL) {
        printf("Không thể mở file output.txt\n");
        return 1;
    }

    dest = fopen("destination.txt", "w");
    if (dest == NULL) {
        printf("Không thể tạo hoặc mở file destination.txt\n");
        fclose(fptr);
        return 1;
    }

    // Đọc từng ký tự từ output và ghi vào destination
    ch = fgetc(fptr);
    while (ch != EOF) {
        fputc(ch, dest);
        ch = fgetc(fptr);
    }

    printf("Đã sao chép nội dung thành công.\n");

    // Đóng file
    fclose(fptr);
    fclose(dest);

    return 0;
}
