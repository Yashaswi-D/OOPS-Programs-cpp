#include<iostream>
using namespace std;
int main()
{
    char str[] ="hjello"; 
    int count =0;
    
    for(int i=0; str[i]!='\0'; i++ )
    {
       count= count+1;
    }
    cout<< "Count is:"<< count;
}