// •	Đề bài: Xây dựng lớp SinhVien với các thuộc tính maSV (string), hoTen (string), diemTB (float). 
// Lớp cần có các phương thức nhapThongTin() để nhập dữ liệu từ bàn phím và xuatThongTin() để hiển thị thông tin sinh viên ra màn hình.

#include<iostream>
#include<string>

using namespace std;

class SinhVien
{
    private: //các thuộc tính nên để private để đảm bảo tính đóng gói
        string maSV;
        string hoTen;
        float diemTB;
    public:
        //Phương thức (method)
        void nhapThongTin()
        {
            cout<<"--Nhap thong tin SV---"<<endl;
            cout<<"Nhap ma sinh vien: ";
            // printf và scanf để nhập dữ liệu, tương tự c++ có cout, cin
            getline(cin,maSV); //getline đọc cả dòng

            cout<<"Nhap ho ten: ";
            getline(cin,hoTen); //getline đọc cả dòng

            cout<<"Nhap diem trung binh: ";
            cin>>diemTB;
            cin.ignore();//Xóa bộ đệm khi nhập số để tránh ảnh hưởng đến getline
        }

        void xuatThongTin()
        {
            cout<<"-- Thong tin SV---"<<endl;
            cout<<"Ma SV: "<< maSV <<endl;
            cout<<"Ho ten SV: "<< hoTen <<endl;
            cout<<"Diem SV: "<< diemTB <<endl;
        }
};

int main()
{
    // Tạo một object sv1 từ class Sinh vien
    SinhVien sv1;

    sv1.nhapThongTin();
    sv1.xuatThongTin();
    return 0;
}