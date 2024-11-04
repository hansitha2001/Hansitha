#include <iostream>
using namespace std;
int main()
{
    int x,y;
    char op;
    cout<<"enter two number:"<<"\n";
    cin>>x>>y;
    cout<<"enter the one operator:"<<"\n";
    cin>>op;

    if(op=='+'){
        cout<<"Adding two numbers"<<x+y<<"\n";
    }
    else if(op=='-'){
        cout<<"subtraction two numbers"<<x-y<<"\n";
    }
    else if(op=='*'){
        cout<<"Multification two numbers"<<x*y<<"\n";
    }
    else {
        cout<<"Division two numbers"<<x/y<<"\n";
    }
    return 0;
}
