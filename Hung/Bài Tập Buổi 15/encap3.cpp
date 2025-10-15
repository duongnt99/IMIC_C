#include <iostream>
using namespace std;

class DynamicArray {
private:
    int* data;   
    int size;    

public:
    DynamicArray(int s) {
        size = s;
        data = new int[size];  
        cout << "Da cap phat mang voi kich thuoc " << size << endl;
    }

    ~DynamicArray() {
        delete[] data; 
        cout << "Da giai phong bo nho!" << endl;
    }

    void nhap() {
        cout << "Nhap " << size << " phan tu cho mang:" << endl;
        for (int i = 0; i < size; i++) {
            cout << "data[" << i << "] = ";
            cin >> data[i];
        }
    }

    void xuat() {
        cout << "Mang vua nhap la: ";
        for (int i = 0; i < size; i++) {
            cout << data[i] << " ";
        }
        cout << endl;
    }
};
int main() {
    int n;
    cout << "Nhap kich thuoc mang: ";
    cin >> n;

    DynamicArray arr(n);  
    arr.nhap();
    arr.xuat();
    return 0;
}
