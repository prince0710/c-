#include<iostream>
#include<conio.h>
 
using namespace std;
int main()
{
    int n;
    cout<<"enter the number";
    cin>>n;
    int sum=0;
    int original=n;
    while(n>0)
    {
        int lastdigit=n%10;
        sum+=lastdigit*lastdigit*lastdigit;
        n=n/10;
    }
    if(sum==original){
        cout<<"armstrong number";
    }
    else{
        cout<<"not an armstrong number";
    }
    return 0;

}