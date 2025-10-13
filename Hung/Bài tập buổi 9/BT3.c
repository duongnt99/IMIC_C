#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE *fptr;
    char sentence[256];
    // int number;

    // Mở file ở chế độ "append" (nối thêm vào cuối)
    fptr = fopen("output.txt", "a");
    if (fptr == NULL)
    {
        printf("Khong the mo file\n");
        exit(1);
    }

    printf("Nhap cau muon them: ");
    // scanf("%d", &number);
    fgets(sentence, sizeof(sentence), stdin);

    // Ghi thêm câu vào cuối file
    fprintf(fptr, "%s", sentence);
    // fprintf(fptr, "%d", number);

    fclose(fptr);

    printf("Successful");
    return 0;
}
