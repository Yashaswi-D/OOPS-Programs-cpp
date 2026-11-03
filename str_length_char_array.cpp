#include<iostream>
using namespace std;
int main()
{
    int n;
    char lis[]="Hello";
    int count=0;
    int i=0;
   while(lis[i]!='\0')
   {
       count++;
       i++;
   }
    cout << "count:" << count <<endl;
    return 0;
}
