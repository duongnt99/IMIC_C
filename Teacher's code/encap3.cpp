// ; •	Đề bài: Xây dựng lớp DynamicArray chứa một con trỏ int* data và một thuộc tính int size, cả hai đều là private. 
// ; Viết một hàm tạo nhận một số nguyên s để cấp phát động một mảng data có kích thước s. 
// ; Viết một hàm hủy để giải phóng bộ nhớ đã được cấp phát cho mảng data..

#include<iostream>
using namespace std;
class DynamicArray
{
private:
    int* data;  
    int size;
public:
    //Hàm tạo
    DynamicArray(int s)
    {
        size = s;
        data = new int[size]; //Cấp phát mảng có size phẩn tử
        cout<<"Phan tu mang "<<size<<endl;
    }
    //Hàm hủy
    ~DynamicArray()
    {
        delete[] data; //Giải phóng bộ nhớ
        data = nullptr;
        cout<<"Giai phong bo nho thanh cong";
    }
};
int main()
{
    DynamicArray arr(10);
}
