#include <iostream>
using namespace std;

class baseClass
{
public:
    virtual void perkenalan() final
    {

        cout << "Hallo saya Function dari base class";
    }
};

class derivedClass : baseClass
{
public:
    void perkenalan()
    {
        cout << "Halo saya Function dari derived Class";
    }
};

int main()
{
    derivedClass a;

    a.perkenalan();

    return 0;
}