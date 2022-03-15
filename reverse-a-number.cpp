#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
    int n;
    cout<<"enter the number"<<endl;
    cin>>n;
    int reverse=0;
    int lastdigit;
    while(n>0){
        lastdigit=n%10;
        reverse=reverse*10+lastdigit;
        n=n/10;
    }
    cout<<reverse;
    return 0;
}