// Bài tập 4: Máy tính khoa học mini an toàn
// •	Đề bài: Xây dựng một máy tính bỏ túi cho phép người dùng chọn một trong ba phép toán: sqrt, log, pow. 
//     Với mỗi phép toán, hãy nhận đầu vào tương ứng và thực hiện tính toán, đồng thời triển khai kiểm tra errno đầy đủ cho cả EDOM và ERANGE.

#include<stdio.h>
#include<math.h>
#include<errno.h>
#include<string.h>
#include<stdlib.h>

int main() {
    int choice;
    double x, y, result;

    printf("Chon phep toan:\n");
    printf("1. sqrt(x)\n");
    printf("2. log(x)\n");
    printf("3. pow(x, y)\n");
    printf("4. exit\n");
    printf("Nhap lua chon (1-4): ");
    scanf("%d", &choice);

    errno = 0; // reset lỗi trước mỗi phép toán

    switch (choice) {
        case 1: // sqrt
            printf("Nhap x: ");
            scanf("%lf", &x);
            result = sqrt(x);
            break;

        case 2: // log
            printf("Nhap x: ");
            scanf("%lf", &x);
            result = log(x);
            break;

        case 3: // pow
            printf("Nhap x: ");
            scanf("%lf", &x);
            printf("Nhap y: ");
            scanf("%lf", &y);
            result = pow(x, y);
            break;

        case 4:
            return 0;

        default:
            printf("Lua chon khong hop le.\n");
            return 0;
    }

    // Kiểm tra lỗi sau phép toán
    if (errno == EDOM) {
        perror("Loi: Ngoai mien xac dinh (EDOM)");
    } else if (errno == ERANGE) {
        perror("Loi: Vuot qua mien gia tri (ERANGE)");
    } else {
        printf("Ket qua = %f\n", result);
    }

    return 0;
}
