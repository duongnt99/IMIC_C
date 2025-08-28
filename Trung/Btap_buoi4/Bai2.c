#include <stdio.h>

int main()
{
    float a;
    printf("Nhap diem trung binh :");
    scanf("%f", &a);
    
    // Sử dụng if else

    // if (a>=9)
    // {
    //     printf("Xuat sac");
    // } else if ((8<=a) && (a<9)) {
    //     printf("Gioi");
    // } else if ((6.5<=a) && (a<8)) {
    //     printf("Kha");
    // } else if ((5<=a) && (a<6.5))
    //     printf("Trung binh");
    // else { printf("Yeu");}

    // sử dụng switch-case
    int int_a = (int)a;

    switch (int_a) {
        case 10:    // điểm 10
        case 9:     // từ 9.0 trở lên
            printf("Xep loai: Xuat sac\n");
            break;
        case 8:
            printf("Xep loai: Gioi\n");
            break;
        case 7:
        case 6:     // từ 6.0 đến 6.9 nhưng ta cần >= 6.5
            if (a >= 6.5)
                printf("Xep loai: Kha");
            else
                printf("Xep loai: Trung binh");
            break;
        case 5:
            printf("Xep loai: Trung binh");
            break;
        default:
            if ((0<=a) && (a<5)) {
                printf("Xep loai: Yeu");
            } else {
                printf("Nhap diem khong hop le!");}
            break;
    }

    return 0;

}