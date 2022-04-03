#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
    int n;
    cout<<"enter the number"<<endl;
    cin>>n;
    int rev=0;
    int pallindrome;
    int original=n;
    while(n>0)
    {
        pallindrome=n%10;
        rev=rev*10+pallindrome;
        n=n/10;
    }
    if( original==rev)
    {
        cout<<"number is pallindrome"<<endl;
    }
    else
    {
        cout<<"not a pallindrome number"<<endl;
    }
    return 0;

}