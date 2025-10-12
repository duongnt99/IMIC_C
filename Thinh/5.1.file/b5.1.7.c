// Bài tập 7: Ghi Dữ liệu có Định dạng
// •	Đề bài: Viết chương trình lưu thông tin của một danh sách sinh viên (Tên, Tuổi, Điểm) vào file students.txt, mỗi sinh viên trên một dòng.

#include<stdio.h>
#include<stdlib.h>

int main()
{
    FILE *fptr;
    char name[100];
    int age;
    float score;
    int num_students;

    // Mở file ở chế độ đọc
    fptr = fopen("student.txt", "a");
    if (fptr == NULL) {
        printf("Không thể mở file \n");
        exit(1);
    }

    printf("Nhap so luong sinh vien:");
    scanf("%d", &num_students);

    for (int i = 0; i < num_students; i++)
    {
        printf("\n Nhap thong tin sinh vien %d: \n", i+1);
        printf("Ten: ");
        scanf(" %[^\n]", name);//format string của scanf
        //" " là bỏ qua mọi ký tự trắng còn tồn đọng trong buffer giúp tránh lỗi khi trc đó có thể có \n chưa đọc
        //%[...] là đọc các kỹ tự liên tiếp nằm trong tập cho phép và lưu vào biến chuỗi
        //^ là ngoại trừ, bỏ đi dấu \n => bảo scanf đọc nguyên cả dòng
        printf("Tuoi: ");
        scanf("%d", &age);
        printf("Diem: ");
        scanf("%f", &score);

        fprintf(fptr, "%s %d %.2f \n", name,age,score);
    }
    
    fclose(fptr);
    return 0;
}
