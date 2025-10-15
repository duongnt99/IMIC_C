#include <iostream>
#include <string>

using namespace std;
class Animal
{
    public:
    void an()
    {
        cout <<"Dang an.....";
    }
};

class cho : public Animal
{
    public:
    void keu()
    {
        cout <<"Gau Gau...";
    }
};
class meo : public Animal
{
    public:
    void keu()
    {
        cout <<"meo meo....";
    }
};
class chim : public Animal
{
    public:
    void keu()
    {
        cout <<"liu lo....";
    }
};

int main()
{
    cho concho;
    meo conmeo;
    chim conchim;

    
    concho.keu();
    concho.an();
    
    conmeo.keu();
    conmeo.an();
    
    conchim.keu();
    conchim.an();
    return 0;
}