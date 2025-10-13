// Viết chương trình lưu thông tin của một danh sách sinh viên (Tên, Tuổi, Điểm) vào file students.txt, 
// mỗi sinh viên trên một dòng.
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    FILE *fptr;
    int n;
    char name[50];
    int age;
    float score;

    fptr = fopen("students.txt", "w");
    if (fptr == NULL)
    {
        perror("Khong the mo file");
        exit(1);
    }

    printf("Nhap so luong sinh vien: ");
    scanf("%d", &n);
    getchar();

    for (int i = 0; i < n; i++)
    {
        printf("\n--- Sinh vien %d ---\n", i + 1);

        printf("Nhap ten: ");
        fgets(name, sizeof(name), stdin);
        name[strcspn(name, "\n")] = '\0'; 

        printf("Nhap tuoi: ");
        scanf("%d", &age);
        printf("Nhap diem: ");
        scanf("%f", &score);
        getchar(); 

        fprintf(fptr, "%s %d %.2f\n", name, age, score);
    }

    fclose(fptr);
    printf("Da luu thong tin vao file students.txt thanh cong!\n");

    return 0;
}
