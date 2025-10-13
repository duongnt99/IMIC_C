#include <iostream>

using namespace std;

class PhanSo{
    private:
        int tuSo;
        int mauSo;
    public:
        void nhapTuSo(){
            cout << "Nhập tử số: ";
            cin >> tuSo;
            cin.ignore();
        }
        void nhapMauSo(){
            cout << "Nhập mẫu số: ";
            cin >> mauSo;
            cin.ignore();
            if(mauSo == 0){
                cout << "Nhập mẫu số khác 0" << endl;
                nhapMauSo();
            }
        }
        void inPhanSo(){
            cout << "Phân số là: " << tuSo << "/" << mauSo << endl;
        }
};

int main(){
    PhanSo ps1;
    PhanSo ps2;
    cout << "---Nhập phân số thứ nhất---" << endl;
    ps1.nhapTuSo();
    ps1.nhapMauSo();
    ps1.inPhanSo();
         cout << "---Nhập phân số thứ hai---" << endl;
    ps2.nhapTuSo();
    ps2.nhapMauSo();
    ps2.inPhanSo();
    return 0;
}