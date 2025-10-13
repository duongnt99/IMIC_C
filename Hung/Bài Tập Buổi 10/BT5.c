#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE *fptr;
    long file_size;
    char filename[100];

    printf("Nhap ten file can kiem tra: ");
    scanf("%s", filename);

    fptr = fopen(filename, "rb");
    if (fptr == NULL)
    {
        perror("Khong the mo file");
        exit(1);
    }

    fseek(fptr, 0, SEEK_END);


    file_size = ftell(fptr);

    printf("Kich thuoc cua file '%s' la: %ld byte\n", filename, file_size);

    fclose(fptr);
    return 0;
}
