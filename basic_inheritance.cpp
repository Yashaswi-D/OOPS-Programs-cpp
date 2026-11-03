#include<iostream>
using namespace std;
class vehicle
{
    public:
       string car;
       string bike;
       void print1()
       {
       cout << "I will choose car :"<<endl;

       }

};
class car : public vehicle{
    public:
       string BMW;
       string sportscar;
       void print2()
       {
       cout << "I will choose sportscar :"<<endl;

       }
};
class sportscar : public car
{
    public:
       string sp1;
       string sp2;
       void print3()
       {
       cout << "I will choose sportscar 1 because it is  good  :"<<endl;

       }
};
int main()
{
    vehicle v;
    car c;
    sportscar s;
    v.print1();
    c.print2();
    s.print3();
    v.print1();
    c.print1();

}
