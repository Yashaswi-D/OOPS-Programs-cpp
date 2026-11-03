#include <iostream>
using namespace std;

class student {
private:
    int id, marks;
    string name;

public:
    void getData() {
        cout << "Enter student name: ";
        cin >> name;

        cout << "Enter student id: ";
        cin >> id;

        cout << "Enter student marks: ";
        cin >> marks;
    }

    void display() {
        cout << "Name: " << name << endl;
        cout << "ID: " << id << endl;
        cout << "Marks: " << marks << endl;
    }
};

int main() {
    student obj;

    obj.getData();
    obj.display();

    return 0;
}
