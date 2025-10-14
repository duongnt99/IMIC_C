
// Bài tập 1: Lớp trừu tượng Shape
// •	Đề bài: Tạo một lớp trừu tượng tên là Shape. Lớp này có hai hàm thuần ảo là tinhDienTich() và tinhChuVi(), cả hai đều trả về double.
// Bài tập 2: Hiện thực hóa Shape
// •	Đề bài: Tạo hai lớp con cụ thể là HinhTron và HinhChuNhat kế thừa từ lớp Shape ở bài tập 1.
// o	HinhChuNhat có thuộc tính chiều dài và chiều rộng.
// o	HinhTron có thuộc tính bán kính. Cài đặt các phương thức tinhDienTich() và tinhChuVi() cho cả hai lớp. Sử dụng hằng số .

#include<iostream>
#include<cmath>
using namespace std;

class Shape{
    public:
        virtual double tinhDienTich() = 0; //Khai báo hàm thuần ảo
        virtual double tinhChuVi() = 0;

        virtual ~Shape(){}

};

class HinhChuNhat: public Shape{
    private:
        double chieuDai;
        double chieuRong;
    public:
        HinhChuNhat(double dai, double rong): chieuDai(dai), chieuRong(rong) {}

        double tinhDienTich() override{
            return chieuDai * chieuRong;
        }
        double tinhChuVi() override{
            return 2*(chieuDai + chieuRong);
        }
};

void showKetQua(Shape* shape)
{
    cout<<"Dien tich: "<<shape->tinhDienTich()<<endl;
    cout<<"Chu vi: "<< shape->tinhChuVi()<<endl;
}

int main()
{
    HinhChuNhat Hcn(5,4);
    showKetQua(&Hcn);
    return 0;
}