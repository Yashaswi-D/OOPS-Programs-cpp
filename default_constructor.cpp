#include<iostream>
using namespace std;
class employee
{
private:
    int Employee_ID;
    string dept;
public:
    employee()
    {
        cin>>Employee_ID;
        cin>>dept;
    }
};
int main()
{
    cout<<"Enter the employee ID and Department:"<<endl;
    employee e1;
    return 0;
}
