#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE *fptr;
    char sentence[256];

    
    fptr = fopen("output.txt", "r");

    if (fptr == NULL)
    {
        printf("Khong the mo file\n");
        exit(1);
    }

    printf("Noi dung file:\n");

    while(fgets(sentence, sizeof(sentence), fptr) != NULL)
    {
        printf("%s", sentence);
    }

    fclose(fptr);
    return 0;
}
