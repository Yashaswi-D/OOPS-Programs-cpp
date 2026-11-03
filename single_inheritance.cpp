#include <iostream>
using namespace std;
class Vehicle
{
    protected:
        string brand;

    public:
        void setBrand(string b)
        {
            brand = b;
        }

        void displayVehicle()
        {
            cout << "Brand: " << brand << endl;
        }
};

class Car:public Vehicle
{
    public:
        void displayCar()
        {
            cout << "This is a car" << endl;
        }
};

int main()
{
    Car c;

    c.setBrand("BMW");
    c.displayVehicle();
    c.displayCar();

    return 0;
}
