// Viết chương trình nhập điểm trung bình của một học sinh (thang điểm 10). 
// Sử dụng chuỗi if-else if-else để xếp loại: >= 9.0: Xuất sắc, >= 8.0: Giỏi, >= 6.5: Khá, >= 5.0: Trung bình, còn lại: Yếu.


// #include <stdio.h>
// int main(){
//     float a;
//     printf("Nhap diem trung binh: ");
//     scanf("%f",&a);
//     if(a >= 8.0 && a <= 10.0){ 
//         if(a >= 9.0){
//             printf("hoc sinh xuat sac");
//         }
//         else{
//             printf("hoc sinh gioi");
//         }
//     }
//     else if(a < 8.0 && a >= 5.0){
//         if(a < 8.0 && a >= 6.5 ){
//             printf("hoc sinh kha");
//         }
//         if (a < 6.5 && a >= 5.0){
//             printf("hoc sinh trung binh");
//         }
//     }
//     else{
//         printf("hoc sinh yeu");
//     }
//     return 0;
// }

#include <stdio.h>

int main() {
    float diem;
    printf("Nhap diem trung binh (0 - 10): ");
    scanf("%f", &diem);

    if (diem < 0 || diem > 10) {
        printf("Diem khong hop le!");
        return 0;
    }

    switch ((int)diem) {
        case 10:
        case 9:
            printf("Hoc sinh xuat sac");
            break;
        case 8:
            printf("Hoc sinh gioi");
            break;
        case 7:
        case 6:
            if (diem >= 6.5)
                printf("Hoc sinh kha");
            else
                printf("Hoc sinh trung binh");
            break;
        case 5:
            printf("Hoc sinh trung binh");
            break;
        default:
            printf("Hoc sinh yeu");
    }

    return 0;
}
