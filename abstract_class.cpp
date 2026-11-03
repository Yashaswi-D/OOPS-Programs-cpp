#include <iostream>
using namespace std;

class shape {
protected:
    float x;

public:
    void getData() {
        cin >> x;
    }
    virtual float calculateArea() = 0;
};

class Square : public shape {
public:
    float calculateArea() {
        return x * x;
    }
};

class Circle : public shape {
public:
    float calculateArea() {
        return 3.14159f * x * x;
    }
};

int main() {
    Square s;
    cout << "Enter side of square: ";
    s.getData();
    cout << "Area of square: " << s.calculateArea() << endl;

    Circle c;
    cout << "Enter radius of circle: ";
    c.getData();
    cout << "Area of circle: " << c.calculateArea() << endl;

    return 0;
}
