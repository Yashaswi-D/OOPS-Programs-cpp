#include<iostream>
using namespace std;

class time
{
    int hour, minute, second;

public:
    void set_values(int, int, int);

    void display()
    {
        cout << "Time: " << hour << ":" << minute << ":" << second;
    }
};

void time::set_values(int h, int m, int s)
{
    hour = h;
    minute = m;
    second = s;
}

int main()
{
    time t;
    t.set_values(10, 30, 45);
    t.display();
    return 0;
}
