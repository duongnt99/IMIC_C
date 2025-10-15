// •	Đề bài: Tạo một lớp cha NhanVien với các thuộc tính protected là ten, tuoi và một phương thức public là xuatThongTinChung(). 
// Sau đó, tạo một lớp con LapTrinhVien kế thừa public từ NhanVien và có thêm thuộc tính private là soGioLamThem. 
// Lớp LapTrinhVien có phương thức xuatThongTinDayDu() để in tất cả thông tin.0.

#include <iostream>
#include <string>

using namespace std;

class nhanvien
{
    protected:
        string ten;
        int tuoi;
    public:
        nhanvien(string ten, int tuoi)
        {
            this ->ten = ten;
            this ->tuoi = tuoi;
        }
        void xuatthongtinchung()
        {
            cout <<"Ten: " <<ten<<", Tuoi: " << tuoi;
        }
};

class laptrinhvien : public nhanvien
{
    private:
        int sogiolamthem;
    public:
        laptrinhvien(string ten, int tuoi, int sogiolamthem) : nhanvien(ten,tuoi)
        {
            this ->sogiolamthem = sogiolamthem;
        }
        void xuatthongtindaydu()
        {
            xuatthongtinchung();
            cout << ", So gio lam them: " << sogiolamthem << endl;
        }
};

int main()
{
    laptrinhvien ltv1("Andrew", 25, 40);
    cout <<"Thong tin lap trinh vien: "<< endl;
    ltv1.xuatthongtindaydu();

    return 0;
}