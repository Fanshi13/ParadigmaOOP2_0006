#include <iostream>
using namespace std;

class baseClass
{
public:
    virtual void perkenalan()
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