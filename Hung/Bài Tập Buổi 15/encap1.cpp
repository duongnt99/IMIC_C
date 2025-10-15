// •	Đề bài: Sửa lại lớp SinhVien từ phần bài tập Class&Object. Chuyển tất cả các thuộc tính (maSV, hoTen, diemTB) thành private. 
// Cung cấp các phương thức public getter (ví dụ: getMaSV()) và setter (ví dụ: setMaSV()) cho mỗi thuộc tính. 
// Trong phương thức setDiemTB(float diem), hãy thêm logic để đảm bảo điểm được gán phải nằm trong khoảng từ 0.0 đến 10.0.
// #include <string>
#include <iostream>
#include <string>

using namespace std;

class Sinhvien
{
private: // cac thuoc tinh nen de private dam bao cach dong goi
    string maSV;
    string HoTen;
    float diemTB;
public:
// phuong thuc getter để đọc giá trị thuộc tính từ bên ngoài
    string getmaSV()
    {
        return maSV;
    }
    string getHoTen()
    {
        return HoTen;
    }
    float getdiemTB()
    {
        return diemTB;
    }

    void setmaSV(string newMSV)
    {
        maSV = newMSV;
    }
    void setHoTen(string newHT)
    {
        HoTen = newHT;
    }
    void setdiemTB(float newDTB)
    {
        if(newDTB >=0 && newDTB <= 10)
        {
            diemTB = newDTB;
        }
        else
        {
            cout<<"Diem TB khong hop le!"<<endl;
        }
    }
};

int main()
{
    Sinhvien sv1;

    sv1.setmaSV("20028764");
    sv1.setHoTen("Hung Vo");
    sv1.setdiemTB(9.5);
    sv1.setdiemTB(8.0);
    sv1.setdiemTB(13);

    cout<<"Thong tin sinh vien"<<endl;
    cout<<"Ma sinh vien: "<<sv1.getmaSV()<<endl;
    cout<<"Ho Ten: "<<sv1.getHoTen()<<endl;
    cout<<"Diem TB: "<<sv1.getdiemTB()<<endl;
    return 0;
}