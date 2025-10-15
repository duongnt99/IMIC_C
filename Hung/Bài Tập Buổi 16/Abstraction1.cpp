#include <iostream>
#include <string>
using namespace std;

class Shape
{
    public:
        virtual double tinhdientich() = 0;
        virtual double tinhchuvi() = 0;
        virtual ~Shape(){}
};

class hinhchunhat : public Shape
{
    private:
        double chieudai;
        double chieurong;
    public:
        hinhchunhat(double dai, double rong) : chieudai(dai), chieurong(rong){}
        
            double tinhdientich() override
            {
                return chieudai * chieurong;
            }
            double tinhchuvi() override
            {
                return 2*(chieudai + chieurong);
            }
        
};
class hinhtron : public Shape
{
private:
    double bankinh;
    const double PI = 3.14159;

public:
    hinhtron(double r) : bankinh(r) {}

    double tinhdientich() override
    {
        return PI * bankinh * bankinh;
    }

    double tinhchuvi() override
    {
        return 2 * PI * bankinh;
    }
};

void showkerqua(Shape* Shape)
{
    cout << "dien tich: "<<Shape->tinhdientich()<<endl;
    cout << "chu vi: "<<Shape ->tinhchuvi()<<endl;
}

int main()
{
    hinhchunhat hcn(5,4);
    hinhtron ht(3);
    cout<<"\nhinh chu nhat"<<endl;
    showkerqua(&hcn);
    cout<<"\nHinh tron"<<endl;
    showkerqua(&ht);
    return 0;
}