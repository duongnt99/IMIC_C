#include <iostream>
#include <string>

using namespace std;

class Animal{
    public:
        virtual void makesound()
        {
            cout << "Make sound" << endl;
        }
        virtual ~Animal(){}
};
class dog : public Animal
{
    public:
        void makesound() override
        {
            cout << "Gau Gau" << endl;
        }
};
class cat : public Animal
{
    public:
        void makesound() override
        {
            cout << "Meo Meo" << endl;
        }
};


int main()
{
    Animal* animal[3];

    animal[0] = new dog();
    animal[1] = new cat();
    animal[2] = new dog();
    for(int i = 0;i <3;i++)
    {
        animal[i]->makesound();
    }
    for(int i = 0; i < 3; i++)
    {
        delete animal[i];
    }
    return 0;
}