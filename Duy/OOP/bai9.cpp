#include <iostream>
#include <string.h>

using namespace std;

class DongVat{
    public:
        void an(){
            cout << "Động vật đang ăn..." << endl;
        }
        
};

class Cho : public DongVat{
    public:
        void keu(){
            cout << "Chó: Gâu gâu" << endl;
        }
};

class Meo : public DongVat{
    public:
        void keu(){
            cout << "Mèo: Meow Meow" << endl;
        }
};

class Chim : public DongVat{
    public:
        void keu(){
            cout << "Chim: Chip chip" << endl;
        }
};

int main(){ 
    Cho c;
    Meo m;
    Chim ch;

    c.an();
    c.keu();
    m.an();
    m.keu();
    ch.an();
    ch.keu();    
    return 0;
}