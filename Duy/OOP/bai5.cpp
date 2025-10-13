#include <iostream>
#include <iomanip>

using namespace std;

class Date{
    private:
        int ngay;
        int thang;
        int nam;
    public:
        Date(int d, int m, int y){
            ngay = d;
            thang = m;
            nam = y;
        }
        void printDate(){
            cout << setfill('0') << setw(2) << ngay << "/"
                 << setfill('0') << setw(2) << thang << "/"
                 << setfill('0') << setw(4) << nam << endl;
        }
};

int main(){
    Date date(9, 10, 2025);
    date.printDate();
    return 0;
}