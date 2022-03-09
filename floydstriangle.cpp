#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
    int n,i,j,count=1;
    cout<<"enter the number"<<endl;
    cin>>n;
    for(i=1; i<=n; i++){
        for(j=1; j<=i; j++){
            cout<<count<<" ";
            count++;
        }
        cout<<endl;
    }
    return 0;
}

// 1 
// 2 3 
// 4 5 6
// 7 8 9 10
// 11 12 13 14 15