#include<stdio.h>
#include<stdlib.h>

int main()
{
    FILE *fptr;
    char sentence[256];

    //mở file ở chế độ ghi
    fptr = fopen("output.txt", "w");

    //kiểm tra xem file có mở thành công không
    if (fptr == NULL)
    {
        printf("Khong thẻ mo file");
        exit(1);
    }
    printf("Input sentence: ");
    fgets(sentence, sizeof(sentence), stdin);

    //ghi câu vào file
    fprintf(fptr, "%s", sentence);

    //đóng file
    fclose(fptr);

    printf("Sucessful");
    return 0;
}