#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
   string A ; string B;
    cout<< "Enter the string to check palindrome :";
    cin>>A;
    B =A;
    reverse(B.begin(),B.end());
    if( A == B)
    {
        cout<<"palindrome"<<endl;

    }
    else{
        cout<<" Not palindrome"<<endl;
    }
    return 0;
}