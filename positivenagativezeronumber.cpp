#include <iostream>
using namespace std;
int main()
{
    int x;
    cout<<"Enter any positive,nagative or zero number:";
    cin>>x;
    if (x>0){
        cout<<"Number is Positive";
    }
    else if (x<0){
        cout<<"Number is Negative";
    }
    else{
        cout<<"Number is zero";
    }
    return 0;
}
