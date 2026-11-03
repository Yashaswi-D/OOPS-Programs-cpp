#include<iostream>
#include <string>
using namespace std;
class student
{
private:
    string name;
    int age;
public:
    void SetData()
    {
        name="Binitha";
        age=20;
    }
    void DisplayData()
    {

        cout<<"Name="<<name<<endl;
        cout<<"age="<<age;
    }
};
int main()
{
    student o1;
    o1.SetData();
    o1.DisplayData();
    return 0;
}


