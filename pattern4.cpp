// *****
// **** 
// ***
// **
// *
#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
    int i, j,n;
    cout<<"enter the number"<<endl;
    cin>>n;

    for(i=n; i>=1; i--)
    {
        for(j=1; j<=i; j++)
        {
            cout<<"*";
        }
        cout<<endl;
    }
    return 0;  
}