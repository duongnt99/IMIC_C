#include <iostream>
using namespace std;

// Khai báo lớp PhanSo
class PhanSo {
private:
    int tuSo;
    int mauSo;

public:
    PhanSo() {
        tuSo = 0;
        mauSo = 1; // tránh chia cho 0
    }

    // Hàm khởi tạo có tham số
    PhanSo(int tu, int mau) {
        if (mau == 0) {
            cout << "Mau so khong duoc bang 0! Tu dong gan mau = 1.\n";
            mau = 1;
        }
        tuSo = tu;
        mauSo = mau;
    }

    // Hàm in phân số
    void inPhanSo() {
        cout << tuSo << "/" << mauSo << endl;
    }
};

// Hàm main
int main() {
    // Cách 1: khởi tạo có tham số
    PhanSo ps1(3, 4);   // 3/4
    PhanSo ps2(5, 8);   // 5/8

    cout << "Phan so thu nhat la: ";
    ps1.inPhanSo();

    cout << "Phan so thu hai la: ";
    ps2.inPhanSo();

    // Cách 2: khởi tạo mặc định rồi gán thủ công
    PhanSo ps3;
    cout << "Phan so thu ba la: ";
    ps3.inPhanSo();

    return 0;
}
