// Bài tập 1: Đơn kế thừa - Quản lý Nhân viên
// •	Đề bài: Tạo một lớp cha NhanVien với các thuộc tính protected là ten, tuoi và một phương thức public là xuatThongTinChung(). 
// Sau đó, tạo một lớp con LapTrinhVien kế thừa public từ NhanVien và có thêm thuộc tính private là soGioLamThem. 
// Lớp LapTrinhVien có phương thức xuatThongTinDayDu() để in tất cả thông tin.0.

#include<iostream>
#include<string>

using namespace std;

class NhanVien
{
    protected:
       string ten;
       int tuoi;
    public:
        NhanVien(string ten, int tuoi) //Hàm tạo
        {
            this->ten = ten;
            this->tuoi = tuoi;
        }
        void xuatThongTinChung()
        {
            cout<<"Ten: "<<ten<<", Tuoi: "<<tuoi;
        }
};

class LapTrinhVien : public NhanVien
{
    private:
        int soGioLamThem;
    public:
        LapTrinhVien(string ten, int tuoi, int soGioLamThem) : NhanVien(ten, tuoi)
        {
            this->soGioLamThem = soGioLamThem;
        }

        void xuatThongTinDayDu()
        {
            xuatThongTinChung();
            cout<<", So gio lam them: "<< soGioLamThem<<endl;
        }
    
};

int main()
{
    LapTrinhVien ltv1("Andrew", 25, 40);
    cout<<"Thong tin lap trinh vien: "<<endl;
    ltv1.xuatThongTinDayDu();

    return 0;

}
