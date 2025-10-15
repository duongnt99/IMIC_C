#include <iostream>
#include <string>

using namespace std;

class Nguoi
{
    protected:
        string HoTen;
    public:
        Nguoi(string HoTen) : HoTen(HoTen) {}
        void hienthi()
        {
            cout <<"Ho Ten: "<< HoTen ;
        }

};
class Hocsinh : public Nguoi
{
    protected:
        string lop;
    public:
        Hocsinh(string HoTen, string lop) : Nguoi(HoTen)
        {
            this -> lop = lop;
        }
        void hienthi()
        {
            Nguoi::hienthi();
            cout << ", Lop: " << lop;
        }
};
class Sinhvien : public Hocsinh
{
    protected:
        string chuyennganh;
    public:
        Sinhvien(string HoTen, string lop, string chuyennganh) : Hocsinh(HoTen, lop)
        {
            this -> chuyennganh = chuyennganh;
        }
        void hienthi()
        {
            Hocsinh::hienthi();
            cout << ", Chuyen nganh " << chuyennganh;
        }
};

int main()
{
    Sinhvien stu("Adrew","IT2","Cong Nghe Thong Tin");
    stu.hienthi();
    return 0;
}

