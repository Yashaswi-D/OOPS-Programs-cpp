#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter the n no :"<<endl;
    cin>>n;
     int arr[n];
   for(int i =0; i<n; i++)
   {
   
    cout<<"Enter the numbers:"<<endl;
    cin>> arr[i];
   }
    int biggest = arr[0];
    for(int i=1; i<n ; i++)
    {
        if(biggest<arr[i])
        {
            biggest = arr[i];
        }
       
    }
    cout<< " The Biggest No in the list is :"<< biggest<<endl;

}