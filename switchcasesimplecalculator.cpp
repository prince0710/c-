#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
    float n1,n2;
    cout<<"input 1st numbers"<<endl;
    cin>>n1;
    char op;
    cout<<"input an operator"<<endl;
    cin>>op;
    cout<<"input 2nd numbers"<<endl;
    cin>>n2;

    switch (op)
    {
    case '+':
    cout<<n1+n2<<endl;
        break;
    
    case '-':
    cout<<n1-n2<<endl;
        break;

        case '*':
    cout<<n1*n2<<endl;
        break;

        case '/':
    cout<<n1/n2<<endl;
        break;

    default:
    cout<<"enter another operator";
        break;
    }
    return 0;
}