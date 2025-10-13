#include <iostream>

using namespace std;

class DynamicArray{
    private:
        int* data;
        int size;
    public:
        DynamicArray(int s){
            size = s;
            data = new int[size];
            cout << "Đã cấp phát mảng động" << endl;
        }
        ~DynamicArray(){
            delete[] data;
            cout << "Đã giải phóng bộ nhớ của mảng" << endl;
        }
        void nhapMang(){
            for(int i=0; i<size; i++){
                cin >> data[i];
            }
        }
        void xuatMang(){
            for(int i=0; i<size; i++){
                cout << data[i] << " ";
            } 
            cout << endl;
        }
};

int main(){
    int s;
    cout << "Nhập số phần tử của mảng: ";
    cin >> s;
    cin.ignore();
    DynamicArray arr(s);
    cout << "Nhập các giá trị của mảng: ";
    arr.nhapMang();
    cout << "Các giá trị của mảng động là: ";
    arr.xuatMang();
    return 0;
}