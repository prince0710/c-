//  1  
//  0 1
//  1 0 1
//  0 1 0 1
//  1 0 1 0 1

#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
    int n,i,j;
    cout<<"enter the number"<<endl;
    cin>>n;
    for(i=1; i<=n; i++)
    {
        for(j=1; j<=i; j++){
        if((i+j)%2==0){
            cout<<" 1";
        }
        else{
            cout<<" 0";
        }
        }  
        cout<<endl;      
    }
    return 0;
}