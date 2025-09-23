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

    //Mở file ở chế độ nối
    fptr = fopen("students.txt", "w");

    //Kiểm tra xem file có mở thành công không
    if (fptr == NULL)
    {
        printf("Khong the mo file");
        exit(1);
    }

    printf("nhap so luong sinh vien:");
    scanf("%d", &num_students);
    
    for (int i = 0; i < num_students; i++)
    {
        printf("\n Nhap thong tin sinh vien %d: \n", i+1);
        printf("Tên: ");
        scanf(" %[^\n]", name); //format string của scanf 
        //-> " " là bỏ qua mọi ký tự trắng còn tồn động trong buffer, giúp tránh lỗi khi trước đó có thể có \n chưa đọc
        // %[...] là đọc các ký tự liên tiếp nằm trong tập cho phép và lưu vào biến chuỗi
        // ^ là ngoại trừ, bỏ đi dấu \n ===> bảo scanf đọc nguyên cả dòng (bao gồm cả khoảng trắng), chỉ dừng lại khi gặp dấu xuống dòng
        printf("Tuoi: ");
        scanf("%d", &age);
        printf("Diem: ");
        scanf("%f", &score);

        //Ghi dữ liệu vào file
        fprintf(fptr, "%s %d %.2f \n", name, age, score);
    }
    
    // Đóng file
    fclose(fptr);

    printf("Successful");
    return 0;
}