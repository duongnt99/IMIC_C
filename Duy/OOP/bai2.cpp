#include <iostream>
#include <math.h>

using namespace std;

class TaiKhoanNganHang{
    private:
        double soDu = 0;
    
    public:
        void guiTien(double soTien){
            soDu += soTien;
            cout << "Tài khoản đã được nạp thêm " << soTien << "đ!" << endl;
        }
        void rutTien(double soTien){
            if(soTien > soDu){
                cout << "Số tiền trong tài khoản không đủ!" << endl;
            }
            else{
                soDu -= soTien;
                cout << "Đã rút thành công " << soTien << "đ!" << endl;
            }
        }
        void kiemTraSoDu(){
            cout << "Số dư tài khoản là: " << soDu << "đ" << endl;
        }
};

int main(){
    TaiKhoanNganHang tk1;
    int n;
    double m;
    while (1){
        cout << "1. Nạp tiền" << endl;
        cout << "2. Rút tiền" << endl;
        cout << "3. Kiểm tra số dư" << endl;
        cout << "4. Thoát" << endl;
        cout << "Chọn chức năng: ";
        cin >> n;
        cin.ignore();
        switch (n)
        {
        case 1:
            cout << "Số tiền muốn nạp: ";
            cin >> m;
            cin.ignore();
            tk1.guiTien(m);
            break;
        case 2:
            cout << "Số tiền muốn rút: ";
            cin >> m;
            cin.ignore();
            tk1.rutTien(m);
            break;
        case 3:
            tk1.kiemTraSoDu();
            break;
        case 4:
            exit(1);
        default:
            cout << "Vui lòng nhập lại chức năng!" << endl;
        }
    }
    return 0;
}