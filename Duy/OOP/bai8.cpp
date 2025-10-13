#include <iostream>
#include <string.h>

using namespace std;

class Nguoi{
    protected:
        string ten;
        int tuoi;
    public:
        void xuatThongTinNguoi(){
            cout << "Tên: " << ten << endl;
            cout << "Tuổi: " << tuoi << endl;
        }
};

class HocSinh : protected Nguoi{
    protected:
        string lop;
    public:
        void xuatThongTinHocSinh(){
            cout << "Lớp: " << lop << endl;
        }
};

class SinhVien : protected HocSinh{
    protected:
        string chuyenNganh;
    public:
        SinhVien(string newTen, int newTuoi, string newLop, string newChuyenNganh){
            ten = newTen;
            tuoi = newTuoi;
            lop = newLop;
            chuyenNganh = newChuyenNganh;
        }
        void xuatThongTinSinhVien(){
            cout << "---THÔNG TIN---" << endl;
            xuatThongTinNguoi();
            xuatThongTinHocSinh();
            cout << "Chuyên ngành: " << chuyenNganh << endl;
        }
};

int main(){
    string name, newclass, major;
    int age;
    cout << "Nhập tên: ";
    getline(cin, name);
    cout << "Nhập tuổi: ";
    cin >> age;
    cin.ignore();
    cout << "Nhập lớp: ";
    getline(cin, newclass);
    cout << "Nhập chuyên ngành: ";
    getline(cin, major);

    SinhVien sv(name, age, newclass, major);
    sv.xuatThongTinSinhVien();
    return 0;
}