// •	Đề bài: Xây dựng lớp Date với các thuộc tính private là ngay, thang, nam. 
// Viết một hàm tạo có tham số để nhận và khởi tạo giá trị cho ba thuộc tính này. 
// Viết một phương thức printDate() để hiển thị ngày theo định dạng dd/mm/yyyy.
#include <iostream>
#include<iomanip>
using namespace std;

class Date
{
private:
   int ngay, thang, nam;
public:
    //Hàm tạo có tham số
    Date(int d, int m, int y)
    {
        ngay = d;
        thang = m;
        nam = y;
        cout<<"Doi tuong Date duoc khoi tao"<<endl;
    }
    void printDate()
    {
        cout<<setfill('0')<<setw(2)<<ngay<<"/"<<setfill('0')<<setw(2)<<thang<<"/"<<nam<<endl;
    }
};
int main()
{
    Date toDay(9,10,2025);
    cout<<"Ngay hom nay la: ";
    toDay.printDate();
    return 0;

}

