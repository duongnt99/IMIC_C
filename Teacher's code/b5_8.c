// Bài tập 8: Đọc Dữ liệu có Định dạng
// •	Đề bài: Viết chương trình đọc file students.txt và tính điểm trung bình của tất cả sinh viên.
#include<stdio.h>
#include<stdlib.h>

int main()
{
    FILE *fptr;
    char name[100];
    int age;
    float score;
    float total_score = 0;
    int num_students = 0;

    //Mở file ở chế độ nối
    fptr = fopen("students.txt", "r");

    //Kiểm tra xem file có mở thành công không
    if (fptr == NULL)
    {
        printf("Khong the mo file");
        exit(1);
    }

    // Đọc file đến khi mà fscanf không đọc được đủ 3 mục
    while (fscanf(fptr, "%99[^0-9] %d %f", name, &age, &score) == 3)// Đọc tất cả các ký tự cho đến khi gặp số (tuổi) -> tên không được chứa số
    {
        printf("Da doc: Ten=%s, Tuoi = %d, Diem =%.2f\n", name, age, score);
        total_score+=score;
        num_students++;
    }
    
    
    // Đóng file
    fclose(fptr);

    if (num_students>0)
    {
        printf("Tong sinh vien: %d\n", num_students);
        printf("Diem trung binh: %.2f\n", total_score/num_students);
    }else{
        printf("Khong co sinh vien");
    }
    

    printf("Successful");
    return 0;
}