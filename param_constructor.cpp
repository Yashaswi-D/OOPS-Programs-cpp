#include<iostream>
using namespace std;
class demo{
    int m, n;
    public:
      demo(int x, int y)
      {
        m=x;
        n=y;
        cout<<"constructor called";
      }
};
int main()
{
    demo d1(5,6);
}