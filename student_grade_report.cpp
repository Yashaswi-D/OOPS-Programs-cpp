#include <iostream>
#include <string>
using namespace std;

class StudentRecord {
private:
    int roll;
    string name;
    float m1, m2, m3;
    float total;
    float avg;
    char grade;

public:
    void readData() {
        cout << "Enter roll number: ";
        cin >> roll;
        cin.ignore();
        cout << "Enter name: ";
        getline(cin, name);
        cout << "Enter marks in 3 subjects: ";
        cin >> m1 >> m2 >> m3;

        total = m1 + m2 + m3;
        avg = total / 3.0f;

        if (avg >= 90)
            grade = 'A';
        else if (avg >= 75)
            grade = 'B';
        else if (avg >= 60)
            grade = 'C';
        else if (avg >= 40)
            grade = 'D';
        else
            grade = 'F';
    }

    void printData() {
        cout << "\n--- Student Report ---" << endl;
        cout << "Roll No: " << roll << endl;
        cout << "Name: " << name << endl;
        cout << "Total: " << total << "/300" << endl;
        cout << "Percentage: " << avg << "%" << endl;
        cout << "Grade: " << grade << endl;
    }
};

int main() {
    StudentRecord s;
    s.readData();
    s.printData();
    return 0;
}

