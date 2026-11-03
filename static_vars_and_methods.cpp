#include <iostream>
using namespace std;

class Employee {
private:
    int empId;
    string name;
    static int count;

public:
    void getDetails(int id, string n) {
        empId = id;
        name = n;
        count++;
    }

    void display() {
        cout << "ID: " << empId << ", Name: " << name << endl;
    }

    static void showCount() {
        cout << "Total employees: " << count << endl;
    }
};

int Employee::count = 0;

int main() {
    Employee::showCount();

    Employee e1, e2, e3;
    e1.getDetails(1, "Aman");
    e2.getDetails(2, "Rohan");
    e3.getDetails(3, "Sneha");

    e1.display();
    e2.display();
    e3.display();

    Employee::showCount();

    return 0;
}

