// Viết chương trình đọc một file, đếm tổng số từ và tổng số ký tự.
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int main()
{
    FILE *fptr;
    int c;
    int word_count = 0, char_count = 0;
    int in_word = 0; 

    // Mở file đọc
    fptr = fopen("output.txt", "r");
    if (fptr == NULL)
    {
        perror("Khong the mo file");
        exit(1);
    }

    // Đọc từng ký tự
    while ((c = fgetc(fptr)) != EOF)
    {
        char_count++; // mỗi lần đọc 1 ký tự thì tăng biến đếm

        if (isspace(c)) 
        {
            in_word = 0;
        }
        else if (in_word == 0)
        {
            in_word = 1;
            word_count++; 
        }
    }

    fclose(fptr);

    printf("Tong so tu: %d\n", word_count);
    printf("Tong so ky tu: %d\n", char_count);

    return 0;
}
