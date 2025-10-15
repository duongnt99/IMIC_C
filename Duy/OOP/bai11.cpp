#include <iostream>

using namespace std;

class PhanSo{
    public:
        int tuSo;
        int mauSo;

        PhanSo(int tu = 0, int mau = 1): tuSo(tu), mauSo(mau){
            
        }
        PhanSo operator+(const PhanSo b){
            PhanSo kq;
            kq.tuSo = this->tuSo*b.mauSo + this->mauSo*b.tuSo;
            kq.mauSo = this->mauSo*b.mauSo;
            return kq;
        }
        void inPhanso(){
            cout << tuSo << "/" << mauSo << endl; 
        }
};

int main (){
    PhanSo a(1, 2);
    PhanSo b(1,3);
    PhanSo c=a+b;

    c.inPhanso();
    return 0;
}