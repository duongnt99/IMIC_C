#include <iostream>
using namespace std;

class PhanSo {
public:
    int tuSo;
    int mauSo;

    PhanSo(int tu = 0, int mau = 1) : tuSo(tu), mauSo(mau) {}

    // Nạp chồng toán tử 
    PhanSo operator+(const PhanSo& ps) {
        PhanSo tong;
        tong.tuSo = tuSo * ps.mauSo + ps.tuSo * mauSo;
        tong.mauSo = mauSo * ps.mauSo;
        return tong;
    }

    // Hàm in phân số
    void inPhanSo() {
        cout << tuSo << "/" << mauSo << endl;
    }
};

int main() {
    PhanSo a(1, 2);
    PhanSo b(1, 3);
    PhanSo c = a + b;

    cout << "Phan so a: ";
    a.inPhanSo();

    cout << "Phan so b: ";
    b.inPhanSo();

    cout << "Tong a + b = ";
    c.inPhanSo();

    return 0;
}
