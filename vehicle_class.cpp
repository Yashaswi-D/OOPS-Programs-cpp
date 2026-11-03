#include <iostream>
using namespace std;

class Car {
private:
    string brand;
    int speed;

public:
    void getdata() {
        cout << "Enter the car brand: ";
        cin >> brand;

        cout << "Enter the car speed: ";
        cin >> speed;
    }

    void display() {
        cout << "Brand: " << brand << endl;
        cout << "Speed: " << speed << endl;
    }
};

int main() {
    Car car1, car2;

    cout << "Enter details of Car 1" << endl;
    car1.getdata();

    cout << "Enter details of Car 2" << endl;
    car2.getdata();

    cout << "\nDetails of Car 1" << endl;
    car1.display();

    cout << "\nDetails of Car 2" << endl;
    car2.display();

    return 0;
}
