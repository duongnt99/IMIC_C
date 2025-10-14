
// Bài tập 3: Đa hình động với Hàm ảo
// •	Đề bài: Tạo một lớp cha Animal với một hàm ảo makeSound(). 
// Tạo hai lớp con Dog và Cat kế thừa từ Animal và ghi đè (override) phương thức makeSound(). 
// Trong hàm main, tạo một mảng các con trỏ Animal*, trỏ chúng đến các đối tượng Dog và Cat, 
// sau đó duyệt qua mảng và gọi makeSound() cho mỗi con vật.

#include<iostream>
#include<string>
using namespace std;

class Animal{
    public:
        virtual void makeSound() //Khai báo hàm ảo
        {
            cout<<"Make sound"<<endl;
        }

        virtual ~Animal(){}

};

class Dog : public Animal{
    public:
        void makeSound() override{
            cout<<"Gau gau"<<endl;
        }
};

class Cat : public Animal{
    public:
        void makeSound() override{
            cout<<"Meo meo"<<endl;
        }
};

int main()
{
    
    Animal* animals[2];
    animals[0] = new Dog(); //Con trỏ của lớp cha có thể trỏ đến đối tượng của lớp con
    animals[1] = new Cat();

    for (int i = 0; i < 2; i++)
    {
        animals[i]->makeSound();
    }
    
    delete animals[0];
    delete animals[1];

    return 0;
}