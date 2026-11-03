// write  a C++ Program to demonstrate single,multiple & multi level inheritance
#include <iostream>
using namespace std;

// --------- SINGLE INHERITANCE ------
class A
{
public:
    void showA()
    {
        cout << "This is Class A" << endl;
    }
};

class B : public A
{
public:
    void showB()
    {
        cout << "This is Class B (Derived from A)" << endl;
    }
};

// ---------------- MULTIPLE INHERITANCE ----------------
class C
{
public:
    void showC()
    {
        cout << "This is Class C" << endl;
    }
};

class D
{
public:
    void showD()
    {
        cout << "This is Class D" << endl;
    }
};

class E : public C, public D
{
public:
    void showE()
    {
        cout << "This is Class E (Derived from C and D)" << endl;
    }
};

// ---------------- MULTILEVEL INHERITANCE ----------------
class X
{
public:
    void showX()
    {
        cout << "This is Class X" << endl;
    }
};

class Y : public X
{
public:
    void showY()
    {
        cout << "This is Class Y (Derived from X)" << endl;
    }
};

class Z : public Y
{
public:
    void showZ()
    {
        cout << "This is Class Z (Derived from Y)" << endl;
    }
};

int main()
{
    cout << "---- Single Inheritance ----" << endl;
    B b;
    b.showA();
    b.showB();

    cout << "\n---- Multiple Inheritance ----" << endl;
    E e;
    e.showC();
    e.showD();
    e.showE();

    cout << "\n---- Multilevel Inheritance ----" << endl;
    Z z;
    z.showX();
    z.showY();
    z.showZ();

    return 0;
}
