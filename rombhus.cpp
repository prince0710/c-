
//     *****
//    ***** 
//   *****
//  *****
// *****


#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
    int i,j,n;
    cout<<"enter the number"<<endl;
    cin>>n;
    for(i=1; i<=n; i++)
    {
        for(j=1; j<=n-i; j++)
        {
            cout<<" ";
        }
        for(j=1; j<=n; j++)
        {
            cout<<"*";
        }
        cout<<endl;
    }
    return 0;
}