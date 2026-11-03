
#include<iostream>
using namespace std;

class Base
{
    protected:
    int x;

public:
    void setData()
    {
        x = 2;
    }

    int getData()
    {
        return x;
    }
};

class Derived : public Base
{
public:
    void display()
    {
        cout << "Value = " << getData() << endl;
    }
};

int main()
{
    Derived d;

    d.setData();   // fixed
    d.display();
}
