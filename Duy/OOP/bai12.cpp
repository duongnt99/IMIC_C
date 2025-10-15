#include <iostream>
#include <string.h>

using namespace std;

class Animal{
    public:
        virtual void makeSound(){
            cout << "Make sound" << endl;
        }
        virtual ~Animal(){};
};

class Dog : public Animal{
    public:
        void makeSound() override{
            cout << "Gâu gâu" << endl;
        }
};

class Cat : public Animal{
    public:
        void makeSound() override{
            cout << "Mew Mew" << endl;
        }
};

int main(){
    Animal* animal[2];
    animal[0] = new Dog();
    animal[1] = new Cat();
    for(int i=0; i<2; i++){
        animal[i]->makeSound();
    }
    delete animal[0];
    delete animal[1];
    return 0;
}