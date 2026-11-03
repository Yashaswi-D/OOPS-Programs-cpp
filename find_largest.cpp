#include<iostream>
using namespace std;
int main()
{
    int n;
    int lis[100];
    cout<<"Enter the n:";
    cin >> n;
    cout << "Enter the list"<<endl;
    for(int i=0;i<n;i++)
    {
        cin >> lis[i];
    }

    int max=lis[0];
    for(int i=0;i<n;i++)
    {
        if(max<lis[i])
        {
            max=lis[i];
        }

    }
    cout << "Biggest number:" << max <<endl;
    return 0;
}
