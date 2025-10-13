#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE *src, *dest;
    int c; // phải dùng int để nhận fgetc, vì fgetc trả về EOF = -1

    // Mở file nguồn và file đích cùng lúc
    src = fopen("output.txt", "r");
    dest = fopen("destination.txt", "w");

    if (src == NULL || dest == NULL)
    {
        printf("Khong the mo file\n");
        exit(1);
    }

    // Đọc từng ký tự từ src và ghi sang dest
    while ((c = fgetc(src)) != EOF)
    {
        fputc(c, dest);
    }

    // Đóng file
    fclose(src);
    fclose(dest);

    printf("Da sao chep noi dung tu output.txt sang destination.txt thanh cong!\n");
    return 0;
}
