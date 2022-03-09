#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
    int n , i;
    cin>>n;
    int sum=0;
    for ( i = 1; i<=n; i++)
    {
        sum=sum+i;
    }
    cout<<sum<<endl;
    return 0;
}