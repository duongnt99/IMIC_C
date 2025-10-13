// Bài tập 2: Xếp loại học lực
// •	Đề bài: Viết chương trình nhập điểm trung bình của một học sinh (thang điểm 10). 
//     Sử dụng chuỗi if-else if-else để xếp loại: >= 9.0: Xuất sắc, >= 8.0: Giỏi, >= 6.5: Khá, >= 5.0: Trung bình, còn lại: Yếu.

#include <stdio.h>

int main()
{
    float diem;
    printf("Nhap diem cua ban: ");
    scanf("%f",&diem);
    if (diem>=9.0)
    {
        printf("xep loai xuat sac");
    }
    else if ((diem>=8.0)&&(diem<9))
    {
        printf("xep loai gioi");
    }
    else if ((diem>=6.5)&&(diem<8))
    {
        printf("xep loai kha");
    }
    else if ((diem>=5.0)&&(diem<6.5))
    {
        printf("xep loai trung binh");
    }
    else printf("xep loai yeu");
    return 0;
}