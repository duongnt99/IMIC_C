#include <iostream>
#include <string>
using namespace std;

class TaiKhoanNganHang
{
private:
    double sodu;

public:
    TaiKhoanNganHang()
    {
        sodu = 0;
    }

    void Guitien()
    {
        double guitien;
        cout << "Nhap so tien can gui: ";
        cin >> guitien;
        if (guitien <= 0)
        {
            cout << "So tien gui phai lon hon 0!\n";
            return;
        }
        sodu += guitien;
        cout << "Ban da gui " << guitien << " thanh cong.\n";
    }

    void Ruttien()
    {
        double ruttien;
        cout << "Nhap so tien can rut: ";
        cin >> ruttien;
        if (ruttien <= 0)
        {
            cout << "So tien rut phai lon hon 0!\n";
            return;
        }
        if (ruttien > sodu)
        {
            cout << "So du khong du de rut!\n";
        }
        else
        {
            sodu -= ruttien;
            cout << "Rut tien thanh cong. So du con lai: " << sodu << endl;
        }
    }

    void KiemTraSoDu()
    {
        cout << "So du hien tai la: " << sodu << endl;
    }
};

int main()
{
    TaiKhoanNganHang acc1;
    int chon;

    while (true)
    {
        cout << "\n--- Tai Khoan Ngan Hang ---\n";
        cout << "0. Gui tien\n";
        cout << "1. Rut tien\n";
        cout << "2. Kiem tra so du\n";
        cout << "3. Thoat\n";
        cout << "Vui long chon: ";
        cin >> chon;

        switch (chon)
        {
        case 0:
            acc1.Guitien();
            break;
        case 1:
            acc1.Ruttien();
            break;
        case 2:
            acc1.KiemTraSoDu();
            break;
        case 3:
            cout << "Cam on ban da su dung dich vu!\n";
            return 0;
        default:
            cout << "Lua chon khong hop le, vui long chon lai!\n";
        }
    }
}
