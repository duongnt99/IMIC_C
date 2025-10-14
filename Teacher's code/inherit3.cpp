// Bài tập 3: Kế thừa phân cấp - Thế giới Động vật
// •	Đề bài: Tạo lớp cha DongVat có phương thức an(). 
// Tạo ba lớp con Cho, Meo, Chim cùng kế thừa public từ DongVat. 
// Mỗi lớp con có một phương thức riêng là keu() (ví dụ: Cho có gauGau(), Meo có meoMeo()).
#include<iostream>
#include<string>
using namespace std;

class DongVat
{
    public:
        void an()
        {
            cout<<" dang an..."<<endl;
        }
};

class Cho: public DongVat
{
    public:
        void keu()
        {
            cout<<"Gau gau";
        }
};

class Meo: public DongVat
{
    public:
        void keu()
        {
            cout<<"Meo meo";
        }
};

class Chim: public DongVat
{
    public:
        void keu()
        {
            cout<<"Liu lo";
        }
};

int main()
{
    Cho conCho;
    Meo conMeo;
    Chim conChim;

    conCho.keu();
    conCho.an();

    conMeo.keu();
    conMeo.an();

    conChim.keu();
    conChim.an();

    return 0;
}