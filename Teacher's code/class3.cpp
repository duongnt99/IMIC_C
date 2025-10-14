// Bài tập 3: Biểu diễn Phân số
// •	Đề bài: Xây dựng lớp PhanSo với hai thuộc tính tuSo và mauSo (kiểu int). 
// Viết một phương thức inPhanSo() để hiển thị phân số theo định dạng tuSo/mauSo. 
// Trong main, tạo hai đối tượng phân số và hiển thị chúng.

#include<iostream>
#include<string>
#include<iomanip>
using namespace std;

class PhanSo
{
    private: //các thuộc tính nên để private để đảm bảo tính đóng gói
        int tuSo;
        int mauSo;
    public:
        // Hàm khởi tạo tạo giá trị cho tử số và mẫu số
        // Tham số mặc định để tránh lỗi khi truyền giá trị
        PhanSo(int ts = 0, int ms = 1)
        {
            tuSo = ts;
            if (ms != 0)
            {
               mauSo = ms;
            } else{
                cout<<"Mau so phai khac 0"<<endl;
                mauSo = 1;
            }
            
        }
        //Phương thức (method)
        void inPhanSo()
        {
            cout<< tuSo << "/" <<mauSo<<endl;
        }
};
int main()
{
    PhanSo ps1(1,2);
    PhanSo ps2(4,5);
    PhanSo ps3(6,0);

    ps1.inPhanSo();
    ps2.inPhanSo();
    ps3.inPhanSo();
    return 0;
}