// Bài tập 4: Sao chép File
// •	Đề bài: Viết chương trình sao chép toàn bộ nội dung của output.txt sang destination.txt

#include<stdio.h>
#include<stdlib.h>

int main()
{
    FILE *source_file, *dest_file;
    char c;

    //Mở file ở chế độ đọc
    source_file = fopen("output.txt", "r");
    if (source_file == NULL)
    {
        printf("Khong the mo file");
        exit(1);
    }
    
    dest_file = fopen("destination.txt", "w");
    if (dest_file == NULL)
    {
        printf("Khong the mo file");
        exit(1);
    }

    
    //Đọc nội dung từ file output
    c = fgetc(source_file);

    while (c != EOF)
    {
        fputc(c, dest_file); // Ghi vào file destination.txt
        c = fgetc(source_file);
    }
    
    // Đóng file
    fclose(source_file);
    fclose(dest_file);

    printf("Successful");
    return 0;
    
}