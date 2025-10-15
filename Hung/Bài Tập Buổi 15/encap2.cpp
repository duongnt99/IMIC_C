#include <iostream>

using namespace std;

class date
{
    private:
    int ngay,thang,nam;
    public:
    int getngay()
    {
        return ngay;
    }
    int getthang()
    {
        return thang;
    }
    int getnam()
    {
        return nam;
    }
    void setngay(int newngay)
    {
        ngay = newngay;
    }
    void setthang(int newthang)
    {
        thang = newthang;
    }
    void setnam(int newnam)
    {
        nam = newnam;
    }
    void printdate()
    {
        cout<< getngay() << "/"<< getthang() << "/" <<getnam() << endl;
    }
};
int main()
{
    date nam1;
    nam1.setngay(23);
    nam1.setthang(05);
    nam1.setnam(2001);
    nam1.printdate();
    return 0;
}