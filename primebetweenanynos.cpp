#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
    int n,i,a,b;
    cout<<"enter any number"<<endl;
    cin>>a>>b;
    for ( n = a; n<=b; n++)
    {
        for ( i = 2; i < n; i++)
        {
            if(n%i==0)
            break;
        }
        if (i==n)
        {
            cout<<n<<endl;
        }
        
    }
    return 0;
}
