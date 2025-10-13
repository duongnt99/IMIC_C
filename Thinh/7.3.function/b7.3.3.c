// Bài tập 3: Chương trình menu hoàn chỉnh
// •	Đề bài: Viết một chương trình hoàn chỉnh có menu cho phép người dùng: 
//     1. Nhập mảng, 
//     2. Xuất mảng, 
//     3. Sắp xếp mảng, 
//     4. Thoát. Mỗi chức năng phải là một hàm riêng.

#include <stdio.h>
#include <stdlib.h>

// Hàm nhập mảng
void nhapMang(int a[], int *n) {
    printf("Nhap so phan tu cua mang: ");
    scanf("%d", n);
    for (int i = 0; i < *n; i++) {
        printf("Nhap a[%d]: ", i);
        scanf("%d", &a[i]);
    }
}

// Hàm xuất mảng
void xuatMang(int a[], int n) {
    if (n == 0) {
        printf("Mang rong!\n");
        return;
    }
    printf("Cac phan tu trong mang: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", a[i]);
    }
    printf("\n");
}

// Hàm sắp xếp mảng tăng dần
void sapXepMang(int a[], int n) {
    if (n == 0) {
        printf("Mang rong, khong the sap xep!\n");
        return;
    }
    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
            if (a[i] > a[j]) {
                int temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
    }
    printf("Mang da duoc sap xep tang dan!\n");
}

// Hàm hiển thị menu
void menu() {
    printf("\n===== CHUONG TRINH QUAN LY MANG =====\n");
    printf("1. Nhap mang\n");
    printf("2. Xuat mang\n");
    printf("3. Sap xep mang\n");
    printf("4. Thoat\n");
    printf("=====================================\n");
    printf("Chon chuc nang (1-4): ");
}

int main() {
    int a[100];
    int n = 0;
    int choice;

    do {
        menu();
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                nhapMang(a, &n);
                break;
            case 2:
                xuatMang(a, n);
                break;
            case 3:
                sapXepMang(a, n);
                break;
            case 4:
                printf("Thoat chuong trinh. Tam biet!\n");
                break;
            default:
                printf("Lua chon khong hop le! Vui long nhap lai.\n");
        }
    } while (choice != 4);

    return 0;
}
