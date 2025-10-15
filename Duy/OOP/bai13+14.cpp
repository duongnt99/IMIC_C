#include <iostream>

using namespace std;

class Shape {
    public:
        virtual double tinhDienTich() = 0;
        virtual double tinhChuVi() = 0;
        virtual ~Shape(){};
};

class HinhChuNhat : public Shape{
    private:
        double chieuDai;
        double chieuRong;

    public:
        HinhChuNhat(double dai, double rong): chieuDai(dai), chieuRong(rong){}
        double tinhDienTich() override{
            return chieuDai*chieuRong;
        }
        double tinhChuVi() override{
            return 2*(chieuDai+chieuRong);
        }
};

class HinhTron : public Shape{
    private:
        double banKinh;

    public:
        HinhTron(double r): banKinh(r){}
        double tinhDienTich() override{
            return banKinh*banKinh*3.14;
        }
        double tinhChuVi() override{
            return 2*banKinh*3.14;
        }
};

void ketQua(Shape* shape){
    cout << "Diện tích: " << shape->tinhDienTich() << endl;
    cout << "Chu vi: " << shape->tinhChuVi() << endl;
}

int main(){
    HinhChuNhat hcn(5,4);
    hcn.tinhDienTich();
    hcn.tinhChuVi();
    ketQua(&hcn);
    HinhTron tron(5.5);
    tron.tinhChuVi();
    tron.tinhDienTich();
    ketQua(&tron);
    return 0;
}