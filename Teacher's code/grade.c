// #•	Đề bài: Viết chương trình nhập điểm trung bình của một học sinh (thang điểm 10). 
// ; Sử dụng chuỗi if-else if-else để xếp loại: >= 9.0: Xuất sắc, >= 8.0: Giỏi, >= 6.5: Khá, >= 5.0: Trung bình, còn lại: Yếu.

#include<stdio.h>
int main()
{
    float score;
    printf("Nhap diem trung binh:");
    scanf("%f", &score);

    int int_score = (int) score; //Switch-case trong C thì chỉ hoạt động với kiểu int/char

    switch (int_score)
    {
    case 10:
        /* code */
    case 9:
        printf("Xuat sac");
        break;
    case 8:
        printf("Gioi");
        break;
    case 7:
    case 6:
        if (score >= 6.5)
        {
            printf("Kha");
        }
        else{
            printf("Trung binh");
        }
        break;
    case 5:
        printf("Trung binh");
        break;
    default:
        if(score<5.0){
            printf("Yeu");
        }
        else{
            printf("Trung binh");
        }
        break;
    }

    return 0;

}
