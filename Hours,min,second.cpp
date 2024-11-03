#include <iostream>
using namespace std;
int main()
{
   int h,m,s,x ;
   cout<<"enter the time of hours:";
   cin>>h;
   cout<<"enter the time of minutes:";
   cin>>m;
   cout<<"enter the time of seconds:";
   cin>>s;
   x=h*60*60+m*60+s;
   cout<<"total time in second:"<<x<<endl;
   return 0;
}

