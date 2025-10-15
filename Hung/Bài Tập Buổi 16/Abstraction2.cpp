#include <iostream>
#include <string>

using namespace std;


class NhanVien
{
protected:
    string ten; 
public:
    NhanVien(string ten) : ten(ten) {}
    virtual double tinhLuong()  = 0; 
    virtual void xuatThongTin() 
    {
        cout << "Ten nhan vien: " << ten << endl;
    }
    virtual ~NhanVien(){} 
};


class NhanVienFullTime : public NhanVien
{
private:
    double luongCoBan;
public:
    NhanVienFullTime(string ten, double luong)
        : NhanVien(ten), luongCoBan(luong) {}

    double tinhLuong() override
    {
        return luongCoBan;
    }

    void xuatThongTin() override
    {
        cout << "--> Nhan vien FullTime\n";
        NhanVien::xuatThongTin();
        cout << "Luong co ban: " << luongCoBan << endl;
        cout << "Tong luong: " << tinhLuong() << endl;
    }
};


class NhanVienPartTime : public NhanVien
{
private:
    int soGioLam;
    double luongTheoGio;
public:
    NhanVienPartTime(string ten, int gio, double luong)
        : NhanVien(ten), soGioLam(gio), luongTheoGio(luong) {}

    double tinhLuong() override
    {
        return soGioLam * luongTheoGio;
    }

    void xuatThongTin() override
    {
        cout << "\n--> Nhan vien PartTime\n";
        NhanVien::xuatThongTin();
        cout << "So gio lam: " << soGioLam << endl;
        cout << "Luong theo gio: " << luongTheoGio << endl;
        cout << "Tong luong: " << tinhLuong() << endl;
    }
};


int main()
{

    NhanVien* nv1 = new NhanVienFullTime("Nguyen Van A", 10000000);
    NhanVien* nv2 = new NhanVienPartTime("Tran Thi B", 80, 80000);

    nv1->xuatThongTin();
    nv2->xuatThongTin();

    delete nv1;
    delete nv2;
    return 0;
}
