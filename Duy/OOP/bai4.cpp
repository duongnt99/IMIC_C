#include <iostream>
#include <string.h>

using namespace std;

class SinhVien{
    private:
        string maSV;
        string hoTen;
        float diemTB;
    public:
        string getMaSV(){
            return maSV;
        }
        string getHoTen(){
            return hoTen;
        }
        float getDiemTB(){
            return diemTB;
        }
        void setMaSV(string newMSV){
            maSV = newMSV;
        }
        void setHoTen(string newHoTen){
            hoTen = newHoTen;
        }
        void setDiemTB(float newDTB){
            if((newDTB>=0) && (newDTB<=10)){
                diemTB = newDTB;
            }
            else{
                cout << "Điểm không hợp lệ" << endl;
            }
        }
};

int main (){
    SinhVien sv1;
    sv1.setMaSV("2310450");
    sv1.setHoTen("Dương Đặng Minh Duy");
    sv1.setDiemTB(10);
    sv1.setDiemTB(9.5);
    sv1.setDiemTB(13);

    cout << "---Thông tin sinh viên---" << endl;
    cout << "Mã sinh viên: " << sv1.getMaSV() << endl;
    cout << "Họ tên sinh viên: " << sv1.getHoTen() << endl;
    cout << "Điểm trung bình: " << sv1.getDiemTB() << endl;
    return 0;
}