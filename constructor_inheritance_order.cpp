#include <iostream>
using namespace std;

// Base class
class Base
{
public:
    Base()
    {
        cout << "Base Constructor Called" << endl;
    }
};

// Derived class
class Derived : public Base
{
public:
    Derived()
    {
        cout << "Derived Constructor Called" << endl;
    }
};

int main()
{
    Derived d;   // object creation

    return 0;
}
