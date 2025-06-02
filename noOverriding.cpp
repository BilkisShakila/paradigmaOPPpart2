#include <iostream>
using namespace std;

class baseClass 
{
public:
    virtual void perkenalan() final 
    {
        cout << "Hallo saya functional dari base class";
    }
};

class derivedClass : public baseClass
{
public :
    void perkenalan()
    {
        cout << "Hallo saya Fuctional dari derived Class";
    }
};

int main ()
{
    derivedClass a;
    a.perkenalan();

    return 0;
}