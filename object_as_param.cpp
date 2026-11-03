#include<iostream>
using namespace std;

class Time
{
    int hour, minute, second;

public:
    void getTime()
    {
        cout << "\nEnter hours: ";
        cin >> hour;

        cout << "\nEnter minute: ";
        cin >> minute;

        cout << "\nEnter second: ";
        cin >> second;
    }

    void printTime()
    {
        cout << hour << ":" << minute << ":" << second;
    }

    void addTime(Time x, Time y)
    {
        hour = x.hour + y.hour;
        minute = x.minute + y.minute;
        second = x.second + y.second;
    }
};

int main()
{
    Time t1, t2, t3;

    t1.getTime();
    t2.getTime();

    t3.addTime(t1, t2);

    cout << "\nAdded Time: ";
    t3.printTime();

    return 0;
}