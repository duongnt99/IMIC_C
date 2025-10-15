#include <iostream>
#include <string.h>

using namespace std;

class NhanVien{
    public:
    string ten;
    virtual double tinhLuong() = 0;
    virtual ~NhanVien(){};

    void nhapTen(){
        cout << "Nhập tên nhân viên: ";
        getline(cin, ten);
    }

    void xuatTen(){
        cout << "Ten: " << ten << endl;
    }
};



class NhanVienPartTime : public NhanVien{
    private:
        double luongCoBan;
    public:
        NhanVienPartTime(double luong) : luongCoBan(luong){};
        double tinhLuong() override{
            return luongCoBan;
        }
};

class NhanVienFullTime : public NhanVien{
    private:
        double luongTheoGio;
        double luongCoBan;

    public:
        NhanVienFullTime(double luongCB, double luongTG) : luongCoBan(luongCB), luongTheoGio(luongTG){};
        double tinhLuong() override{
            return luongCoBan*luongTheoGio;
        }
};

int main (){
    NhanVienPartTime nv1(500000);
    nv1.nhapTen();
    nv1.xuatTen();
    cout << "Luong: " << nv1.tinhLuong() << endl;
    return 0;
}