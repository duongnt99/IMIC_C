// Bài tập 2: Nạp chồng toán tử - Phép toán Phân số
// •	Đề bài: Mở rộng lớp PhanSo đã có. 
// Nạp chồng toán tử + để cộng hai phân số. Công thức cộng hai phân a/b+ c/d = (ad+bc)/bd

#include<iostream>
#include<string>
using namespace std;

class PhanSo{
    public:
        int tuSo;
        int mauSo;

        PhanSo(int tu = 0, int mau = 1): tuSo(tu), mauSo(mau) {}
        //Nạp chồng toán tử
        PhanSo operator+(const PhanSo& other)
        {
            PhanSo ketQua;

            ketQua.tuSo = this->tuSo * other.mauSo + this->mauSo * other.tuSo;
            ketQua.mauSo = this->mauSo * other.mauSo;

            return ketQua;
        }

        void inPhanSo()
        {
            cout<<tuSo<<"/"<<mauSo<<endl;
        }

};

int main()
{
    PhanSo ps1(1,2);
    PhanSo ps2(3,4);

    PhanSo tong = ps1+ps2;// ps1.operator+(ps2)

    tong.inPhanSo();

    return 0;
}