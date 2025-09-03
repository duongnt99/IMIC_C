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