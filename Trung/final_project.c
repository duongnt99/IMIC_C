#include <stdio.h>
#include <conio.h>
#include <windows.h> // Dung Sleep()

char bang[3][3];
char nguoi = 'X';
char may = 'O';

// ====== Hàm khởi tạo bảng ======
void taoBang() {
    for (int i = 0; i < 3; i++)
        for (int j = 0; j < 3; j++)
            bang[i][j] = ' ';
}

// ====== In bảng ra màn hình ======
void inBang() {
    system("cls");
    printf("\n   1   2   3\n");
    for (int i = 0; i < 3; i++) {
        printf("%d ", i + 1);
        for (int j = 0; j < 3; j++) {
            printf(" %c ", bang[i][j]);
            if (j < 2) printf("|");
        }
        printf("\n");
        if (i < 2) printf("  ---+---+---\n");
    }
}

// ====== Kiểm tra còn ô trống không ======
int conOTrong() {
    for (int i = 0; i < 3; i++)
        for (int j = 0; j < 3; j++)
            if (bang[i][j] == ' ')
                return 1; // còn ô trống
    return 0; // hết ô trống
}

// ====== Hàm kiểm tra thắng ======
int kiemtraThang() {
    for (int i = 0; i < 3; i++) {
        if (bang[i][0] == bang[i][1] && bang[i][1] == bang[i][2]) {
            if (bang[i][0] == may) return 10;
            if (bang[i][0] == nguoi) return -10;
        }
    }

    for (int j = 0; j < 3; j++) {
        if (bang[0][j] == bang[1][j] && bang[1][j] == bang[2][j]) {
            if (bang[0][j] == may) return 10;
            if (bang[0][j] == nguoi) return -10;
        }
    }

    if (bang[0][0] == bang[1][1] && bang[1][1] == bang[2][2]) {
        if (bang[0][0] == may) return 10;
        if (bang[0][0] == nguoi) return -10;
    }

    if (bang[0][2] == bang[1][1] && bang[1][1] == bang[2][0]) {
        if (bang[0][2] == may) return 10;
        if (bang[0][2] == nguoi) return -10;
    }

    return 0;
}

// ====== Thuật toán Minimax (đệ quy) ======
int minimax(int capDo, int laMay) {
    int diem = kiemtraThang();
    if (diem == 10) return diem - capDo;
    if (diem == -10) return diem + capDo;
    if (!conOTrong()) return 0;

    if (laMay) {
        int totNhat = -1000;
        for (int i = 0; i < 3; i++) {
            for (int j = 0; j < 3; j++) {
                if (bang[i][j] == ' ') {
                    bang[i][j] = may;
                    int diemTam = minimax(capDo + 1, 0);
                    if (diemTam > totNhat)
                        totNhat = diemTam;
                    bang[i][j] = ' ';
                }
            }
        }
        return totNhat;
    } else {
        int totNhat = 1000;
        for (int i = 0; i < 3; i++) {
            for (int j = 0; j < 3; j++) {
                if (bang[i][j] == ' ') {
                    bang[i][j] = nguoi;
                    int diemTam = minimax(capDo + 1, 1);
                    if (diemTam < totNhat)
                        totNhat = diemTam;
                    bang[i][j] = ' ';
                }
            }
        }
        return totNhat;
    }
}

// ====== Tìm nước đi tốt nhất cho máy ======
void timNuocTotNhat(int *hangTot, int *cotTot) {
    int diemTot = -1000;
    *hangTot = -1;
    *cotTot = -1;

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            if (bang[i][j] == ' ') {
                bang[i][j] = may;
                int diemHienTai = minimax(0, 0);
                bang[i][j] = ' ';
                if (diemHienTai > diemTot) {
                    *hangTot = i;
                    *cotTot = j;
                    diemTot = diemHienTai;
                }
            }
        }
    }
}

// ====== Kiểm tra kết quả ======
char ketQua() {
    int diem = kiemtraThang();
    if (diem == 10) return may;
    if (diem == -10) return nguoi;
    if (!conOTrong()) return 'H'; // Hòa
    return ' ';
}

// ====== Chế độ Người vs Máy ======
void choiNguoiMay() {
    taoBang();
    char ketqua = ' ';
    int hang, cot;

    while (ketqua == ' ') {
        inBang();
        printf("Ban (X) di: nhap hang cot (1-3): ");
        scanf("%d %d", &hang, &cot);

        if (hang < 1 || hang > 3 || cot < 1 || cot > 3 || bang[hang - 1][cot - 1] != ' ') {
            printf("Nhap sai roi! Bam phim bat ky de nhap lai...\n");
            getch();
            continue;
        }

        bang[hang - 1][cot - 1] = nguoi;
        ketqua = ketQua();
        if (ketqua != ' ') break;

        printf("May dang suy nghi...\n");
        Sleep(700);

        int hangMay, cotMay;
        timNuocTotNhat(&hangMay, &cotMay);
        bang[hangMay][cotMay] = may;

        ketqua = ketQua();
    }

    inBang();
    if (ketqua == 'H') printf("Hoa roi!\n");
    else if (ketqua == nguoi) printf("Ban thang!\n");
    else printf("May thang!\n");
}

// ====== Chế độ Người vs Người ======
void choi2Nguoi() {
    taoBang();
    char luot = nguoi;
    char ketqua = ' ';
    int hang, cot;

    while (ketqua == ' ') {
        inBang();
        printf("Luot cua %c, nhap hang cot (1-3): ", luot);
        scanf("%d %d", &hang, &cot);

        if (hang < 1 || hang > 3 || cot < 1 || cot > 3 || bang[hang - 1][cot - 1] != ' ') {
            printf("Nhap sai roi! Bam phim bat ky de nhap lai...\n");
            getch();
            continue;
        }

        bang[hang - 1][cot - 1] = luot;
        ketqua = ketQua();
        luot = (luot == nguoi) ? may : nguoi;
    }

    inBang();
    if (ketqua == 'H') printf("Hoa roi!\n");
    else printf("Nguoi choi %c thang!\n", ketqua);
}

// ====== Hàm chính ======
int main() {
    int chon;
    while (1) {
        system("cls");
        printf("=== TRO CHOI TIC TAC TOE ===\n");
        printf("1. Nguoi vs Nguoi\n");
        printf("2. Nguoi vs May\n");
        printf("3. Thoat\n");
        printf("Nhap lua chon: ");
        scanf("%d", &chon);

        if (chon == 1)
            choi2Nguoi();
        else if (chon == 2)
            choiNguoiMay();
        else if (chon == 3)
            break;
        else {
            printf("Lua chon sai!\n");
            getch();
        }

        printf("Nhan phim bat ky de choi tiep...\n");
        getch();
    }
    return 0;
}
