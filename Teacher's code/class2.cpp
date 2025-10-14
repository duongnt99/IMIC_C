// Mô phỏng Tài khoản Ngân hàng
// •	Đề bài: Xây dựng lớp TaiKhoanNganHang với thuộc tính soDu (double). 
// Lớp này có các phương thức: guiTien(double soTien), rutTien(double soTien), và kiemTraSoDu(). 
// Phương thức rutTien chỉ thành công nếu số dư đủ

#include<iostream>
#include<string>
#include<iomanip>
using namespace std;

class BankAccount
{
    private: //các thuộc tính nên để private để đảm bảo tính đóng gói
        double soDu;
    public:
        // Hàm khởi tạo để gán số dư = 0
        BankAccount()
        {
            soDu = 0;
        }
        //Phương thức (method)
        void guiTien(double soTien)
        {
            if (soTien > 0)
            {
                soDu += soTien;
                cout<<"Giao dich thanh cong. Da gui: "<<soTien<<" vao tai khoan"<<endl;
            }
            else{
                cout<<"So tien phai lon hon 0"<<endl;
            }
            
        }

        void rutTien(double soTien)
        {
            if (soTien <= 0)
            {
                cout<<"So tien rut phai lon hon 0"<<endl;
            }
            else if(soTien < soDu){
                soDu -= soTien;
                cout<<"Giao dich thanh cong. Da rut: "<<soTien<<" tu tai khoan"<<endl;
            }
            else{
                cout<<"Giao dich that bai. Khong du so du"<<endl;
            }
        }

        void kiemTraSoDu()
        {
            cout<<"So du hien tai: "<<fixed<<setprecision(2)<<soDu<<endl;
        }
};

int main()
{
    // Tạo một object sv1 từ class Sinh vien
    BankAccount acc1;

    acc1.kiemTraSoDu();
    cout<<"-----------------"<<endl;
    acc1.guiTien(500000);
    acc1.kiemTraSoDu();
    cout<<"-----------------"<<endl;
    acc1.rutTien(300000);
    acc1.kiemTraSoDu();
    cout<<"-----------------"<<endl;
    acc1.rutTien(600000);
    acc1.kiemTraSoDu();
    cout<<"-----------------"<<endl;
    return 0;
}