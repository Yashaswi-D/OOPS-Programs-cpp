#include <iostream>
using namespace std;

int num = 100;

class NumberOps {
private:
    int a, b;

public:
    NumberOps(int x, int y);
    void show();
    int add();
};

NumberOps::NumberOps(int x, int y) {
    a = x;
    b = y;
}

void NumberOps::show() {
    cout << "Value of a: " << a << endl;
    cout << "Value of b: " << b << endl;
}

int NumberOps::add() {
    return a + b;
}

int main() {
    int num = 25;

    cout << "Local num: " << num << endl;
    cout << "Global num using :: is " << ::num << endl;

    NumberOps obj(15, 35);
    obj.show();
    cout << "Sum: " << obj.add() << endl;

    return 0;
}

