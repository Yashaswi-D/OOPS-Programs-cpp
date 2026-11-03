#include<iostream>
using namespace std;
class employee
{
  int ID;
  string name, dept;
  float salary;
  public:
     employee(int x, string y, string z, float a)
     {
        ID = x;
        name = y;
        dept = z;
        salary = a;
        cout<<"constructor called"<<endl ;
        
     }
     void print()
     {
        cout<<"Name and ID = "<<name<<ID<<endl<<" Department :"<<dept<<endl<<" salary : "<<salary<< endl;
     }
};  
int main()
{
    employee e2(416, "kshama","EandC", 100);
    e2.print();
    employee e1(15,"abc","EEE",2000);
    e1.print();
    
}