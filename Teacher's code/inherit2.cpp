// ; Bài tập 2: Kế thừa đa cấp - Phân cấp Giáo dục
// ; •	Đề bài: Xây dựng một hệ thống kế thừa 3 cấp: Lớp Nguoi là lớp gốc. 
// Lớp HocSinh kế thừa từ Nguoi và có thêm thuộc tính lop. 
// Lớp SinhVien kế thừa từ HocSinh và có thêm thuộc tính chuyenNganh. 
// Mỗi lớp đều có hàm tạo và phương thức hiển thị thông tin của riêng nó..

#include<iostream>
#include<string>

using namespace std;

class Nguoi
{
    protected:
        string Hoten;
    public:
        Nguoi(string Hoten) : Hoten(Hoten) {}
        void hienThi()
        {
            cout<<"Ho ten: "<<Hoten<<endl;
        }
};

class HocSinh : public Nguoi
{
    protected:
        string lop;
    public:
        HocSinh(string Hoten, string lop): Nguoi(Hoten)
        {
            this->lop = lop;
        }
        void hienThi()
        {
            Nguoi::hienThi(); //Phương thức hiển thị của lớp cha
            cout<<", Lop: "<<lop;
        }
};

class SinhVien : public HocSinh
{
    protected:
        string chuyenNganh;
    public:
        SinhVien(string Hoten, string lop, string chuyenNganh): HocSinh(Hoten, lop)
        {
            this->chuyenNganh = chuyenNganh;
        }
        void hienThi()
        {
            HocSinh::hienThi(); //Phương thức hiển thị của lớp cha
            cout<<", Chuyen nganh: "<<chuyenNganh;
        }
};

int main()
{
    SinhVien stu("Andrew", "IT2", "Cong nghe thong tin");
    stu.hienThi();

    return 0;
}
