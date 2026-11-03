#include<iostream>
using namespace std;
class Employ
{
    private:
       int Employ_ID;
       string dept;
    public:
       Employ()
       {
        
        cin>>Employ_ID;
        cin>>dept;

       }
       void print()
       {
        cout<<" Employe ID is "<<Employ_ID<<" and Department is "<<dept;
       }
};
int main()
{
     cout<<" Enter the employee ID and Department :";
    Employ E1;
   
    E1.print();
    return 0;
}