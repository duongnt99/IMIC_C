#include <iostream>
#include <string.h>

using namespace std;

class SinhVien{
    private:
        string maSV;
        string hoTen;
        float diemTB;
    public:
        void nhapThongTin(){
            cout << "---Nhập thông tin sinh viên---" << endl;
            cout << "Nhập mã sinh viên: ";
            getline(cin, maSV);
            cout << "Nhập họ tên: ";
            getline(cin, hoTen);
            cout << "Nhập điểm trung bình: ";
            cin >> diemTB;
            cin.ignore();
        }
        void xuatThongTin(){
            cout << "---Thông tin sinh viên---" << endl;
            cout << "Mã sinh viên: " << maSV << endl;
            cout << "Họ tên sinh viên: " << hoTen << endl;
            cout << "Điểm trung bình: " << diemTB << endl;
        }
};

int main (){
    SinhVien sv1;
    sv1.nhapThongTin();
    sv1.xuatThongTin();
    return 0;
}