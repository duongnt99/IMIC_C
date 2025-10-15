// Xây dựng lớp SinhVien với các thuộc tính maSV (string), hoTen (string), diemTB (float). 
// Lớp cần có các phương thức nhapThongTin() để nhập dữ liệu từ bàn phím và xuatThongTin() để hiển thị thông tin sinh viên ra màn hình.

#include <iostream>
#include <string>

using namespace std;

class Sinhvien
{
private: // cac thuoc tinh nen de private dam bao cach dong goi
    string maSV;
    string HoTen;
    float diemTB;
public:
// phuong thuc (method)
    void Nhapthongtin()
    {
        cout<<"--Nhap thong tin sinh vien--"<<endl;
        cout<<"Nhap ma sinh vien: ";
        getline(cin,maSV); //getline doc ca dong
        cout<<"Nhap Ho Ten: ";
        getline(cin,HoTen); //getline doc ca dong
        cout<<"Nhap diem trung binh: ";
        cin>>diemTB;
        cin.ignore(); // xoa bo dem khi nhap so de tranh anh huong getline
    }

    void Xuatthongtin()
    {
        cout<<"--Thong tin sinh vien--"<<endl;
        cout<<"Ma sinh vien: "<< maSV <<endl;
        cout<<"Ho ten sinh vien: "<< HoTen <<endl;
        cout<<"Diem trung binh: "<< diemTB <<endl;
    }
};

int main()
{
    Sinhvien sv1;

    sv1.Nhapthongtin();
    sv1.Xuatthongtin();
    return 0;
}