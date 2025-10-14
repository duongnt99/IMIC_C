// •	Đề bài: Sửa lại lớp SinhVien từ phần bài tập Class&Object. 
// Chuyển tất cả các thuộc tính (maSV, hoTen, diemTB) thành private. 
// Cung cấp các phương thức public getter (ví dụ: getMaSV()) và setter (ví dụ: setMaSV()) cho mỗi thuộc tính. 
// Trong phương thức setDiemTB(float diem), hãy thêm logic để đảm bảo điểm được gán phải nằm trong khoảng từ 0.0 đến 10.0.

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
        //Phương thức getter đọc giá trị thuộc tính bên ngoài
        string getMaSV()
        {
            return maSV;
        }
        string getHoTen()
        {
            return hoTen;
        }
        float getDiemTB()
        {
            return diemTB;
        }

        //Phương thức setter để ghi giá trị cho thuộc tính từ bên ngoài
        void setMaSV(string newMSV)
        {
            maSV = newMSV;
        }
        void setHoTen(string newHoTen)
        {
            hoTen = newHoTen;
        }
        void setDiemTB(float newDiemTB)
        {
            if (newDiemTB >=0 && newDiemTB <=10)
            {
                diemTB = newDiemTB;
            }
            else{
                cout<<"Diem khong hop le"<<endl;
            }
            
        }

};

int main()
{
    // Tạo một object sv1 từ class Sinh vien
    SinhVien sv1;

    sv1.setMaSV("200288764");
    sv1.setHoTen("Nguyen Van B");

    sv1.setDiemTB(9.5);
    sv1.setDiemTB(9.8);
    sv1.setDiemTB(13);

    
    cout<<"Ma SV: "<< sv1.getMaSV() <<endl;
    cout<<"Ho ten: "<< sv1.getHoTen() <<endl;
    cout<<"Diem TB: "<<sv1.getDiemTB()<<endl;
    
    return 0;
}