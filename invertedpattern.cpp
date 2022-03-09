// 1 2 3 4 5
// 1 2 3 4
// 1 2 3
// 1 2
// 1

#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
    int n,i,j;
    cout<<"enter the number"<<endl;
    cin>>n;
    for(i=n; i>=1; i--){
        for(j=1; j<=i; j++){
            cout<<j<<" ";
        }
        cout<<endl;
    }
    return 0;
}