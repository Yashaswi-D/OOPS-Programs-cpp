#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
    string A,R;
    cout << "Enter string: " << endl;
    cin >> A;
    R=A;
    reverse(R.begin(),R.end());
    if(R==A)
    {
        cout<< "ispalindrome";
    }
    else{
        cout<< "Not a palindrome";
    }
    return 0;
}
