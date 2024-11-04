#include <iostream>
using namespace std;
int main()
{
    string city,country;
    cout<<"Enter the city:";
    cin>>city;
    cin.ignore();
    cout<<"Enter the countrry:";
    getline(cin,country);

    cout<<"You live in "<<city<<","<<country;

    return 0;
}
