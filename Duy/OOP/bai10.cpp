#include <iostream>
#include <string.h>

using namespace std;

class Calculator{
    public:
        int add(int a, int b){
            cout << "Hàm cộng số nguyên: ";
            return a+b;
        }
        double add(double a, double b){
            cout << "Hàm cộng số thực: ";
            return a+b;
        }
        string add(const string a, string b){
            cout << "Hàm cộng chuỗi: ";
            return a+b;
        }
};

int main(){
    Calculator cal;
    cout << cal.add(3,4) << endl;
    cout << cal.add(3.5, 4.5) << endl;
    cout << cal.add("Minh", "Duy") << endl;
    return 0;
}