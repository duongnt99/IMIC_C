#include <iostream>
#include <string.h>

using namespace std;

class NhanVien{
    protected:
        string ten;
        int tuoi;
    public:
        void xuatThongTinChung(){
            cout << "Tên: " << ten << endl;
            cout << "Tuoi: " << tuoi << endl;
        }
};

class LapTrinhVien : protected NhanVien{
    private:
        double soGioLamThem;
    public:
        LapTrinhVien(string newTen, int newTuoi, double newSoGioLamThem){
            ten = newTen;
            tuoi = newTuoi;
            soGioLamThem = newSoGioLamThem;
        }
        void xuatThongTinDayDu(){
            cout << "---THÔNG TIN NHÂN VIÊN---" << endl;
            xuatThongTinChung();
            cout << "Số giờ làm thêm: " << soGioLamThem << endl;
        }
};

int main(){
    string name;
    int age;
    double hour;
    cout << "Nhập tên nhân viên: ";
    getline(cin, name);
    cout << "Nhập tuổi: ";
    cin >> age;
    cout << "Nhập số giờ làm thêm: ";
    cin >> hour;

    LapTrinhVien dev(name, age, hour);
    dev.xuatThongTinDayDu();
    return 0;
}