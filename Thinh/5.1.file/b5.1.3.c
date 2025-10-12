// Bài tập 3: Nối thêm Dữ liệu
// •	Đề bài: Viết chương trình yêu cầu người dùng nhập thêm một câu và nối nó vào cuối file output.txt mà không xóa nội dung cũ.

#include <stdio.h>
#include <stdlib.h>

int main() {
    FILE *fptr;
    char sentence[256];

    // Mở file ở chế độ đọc
    fptr = fopen("output.txt", "a");
    if (fptr == NULL) {
        printf("Không thể mở file output.txt\n");
        exit(1);
    }

    printf("Input sentence: ");
    fgets(sentence, sizeof(sentence), stdin);

    //ghi câu vào file
    // fprintf(fptr, "%s", sentence);
    fputs(sentence, fptr);

    //đóng file
    fclose(fptr);

    printf("Successful");
    return 0;
}