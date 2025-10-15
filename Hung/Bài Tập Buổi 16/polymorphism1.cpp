#include<iostream>
#include<string>
using namespace std;

class Calculator{
    public:
        int add(int a, int b){
            cout<< "Goi ham cong so nguyen ";
            return a+b;
        }

        double add(double a, double b)
        {
            cout<<"Ham cong so thuc ";
            return a+b;
        }

        string add(const string& a, const string& b)
        {
            cout<<"Ham noi chuoi";
            return a+b;
        }

};

int main()
{
    Calculator calc;
    cout<<calc.add(5,15)<<endl;
    cout<<calc.add(5.5,15.6)<<endl;
    cout<<calc.add("IMIC","2025")<<endl;

    return 0;
}