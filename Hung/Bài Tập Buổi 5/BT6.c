#include <stdio.h>

int main() {
    int choice;
    float balance = 5000000; // số dư ban đầu: 5 triệu
    float amount;

    do {
        printf("\n===== CHUONG TRINH MO PHONG ATM =====\n");
        printf("1. Kiem tra so du\n");
        printf("2. Rut tien\n");
        printf("3. Nap tien\n");
        printf("4. Thoat\n");
        printf("=====================================\n");
        printf("Moi ban chon chuc nang: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("So du hien tai: %.2f VND\n", balance);
                break;

            case 2:
                printf("Nhap so tien muon rut: ");
                scanf("%f", &amount);
                if (amount <= 0) {
                    printf("So tien khong hop le!\n");
                } else if (amount > balance) {
                    printf("So du khong du de rut!\n");
                } else {
                    balance -= amount;
                    printf("Rut thanh cong! So du con lai: %.2f VND\n", balance);
                }
                break;

            case 3:
                printf("Nhap so tien muon nap: ");
                scanf("%f", &amount);
                if (amount <= 0) {
                    printf("So tien khong hop le!\n");
                } else {
                    balance += amount;
                    printf("Nap thanh cong! So du moi: %.2f VND\n", balance);
                }
                break;

            case 4:
                printf("Cam on ban da su dung dich vu ATM. Hen gap lai!\n");
                break;

            default:
                printf("Lua chon khong hop le, vui long chon lai!\n");
        }

    } while (choice != 4);

    return 0;
}
