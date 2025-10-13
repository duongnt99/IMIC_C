#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE *fptr;
    char name[50];
    int age;
    float score;
    int count = 0;
    float Tongdiem = 0.0;

    // Mở file ở chế độ đọc
    fptr = fopen("students.txt", "r");
    if (fptr == NULL)
    {
        perror("Khong the mo file");
        exit(1);
    }

    // Đọc từng dòng dữ liệu có định dạng
    while (fscanf(fptr,"%99[^0-9] %d %f", name, &age, &score) == 3)
    {
        printf("Ten: %s | Tuoi: %d | Diem: %.2f\n", name, age, score);
        Tongdiem += score;
        count++;
    }

    fclose(fptr);

    if (count > 0)
    {
        float DiemTB = Tongdiem / count;
        printf("Diem trung binh cua %d sinh vien la: %.2f\n", count, DiemTB);
    }
    else
    {
        printf("File khong co du lieu\n");
    }

    return 0;
}
