#include <stdio.h>

int main() {
    float score;

    printf("Nhap diem: ");
    scanf("%f", &score);

    int int_score = (int)score; //switch case trong C chỉ hoạt động với kiểu int/char

    switch (int_score)
     {
        case 10:
        case 9:
            printf("Xep loai: Xuat sac");
            break;
        case 8:
            printf("Xep loai: Gioi");
            break;
        case 7:
        case 6:
            if (score>=6.5)
            {
                printf("Xep loai: Kha");
            }
            else{
                printf("Xep loai: Trung binh");
            }
            break;
        case 5:
            printf("Xep loai: Trung binh");
            break;
        default:
            if (score<5)
            {
                printf("Xep loai: Yeu");
            }
            else{
                printf("Xep loai: Trung binh");
            }
            break;
    }

    return 0;
}
