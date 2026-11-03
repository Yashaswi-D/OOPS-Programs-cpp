#include<iostream>
using namespace std;
class employee
{
    int id,salary;
    string name,dept;
public:
    employee(int x,int y,string z,string w)
    {
        id=x;
        salary=y;
        name=z;
        dept=w;
        cout<<"Constructor Called\n";
        cout<<id<<"\n"<<salary<<"\n"<<name<<"\n"<<dept;
    }
};
int main()
{
    employee e1(200,100000,"Kshama","ECE");
    employee e2(201,200000,"sheefa","ECE");
}
