#include<iostream>
using namespace std;
void swap2num(int x,int y);
void swap2num(int x,int y)
{
    swap(x,y);
    cout<< "x:"<< x << endl << "y:" <<y;
}
int main()
{
    int x,y;
    cout << "Enter x and y" << endl;
    cin >> x >> y;
    swap2num(x,y);

    return 0;
}
