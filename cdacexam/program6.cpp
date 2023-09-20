//wap print weekday of given date
#include<iostream>
using namespace std;
int main()
{
    int a;
    cout<<"enter the day:";
    cin>>a;
    switch(a)
    {
        case 1:
        cout<<"\nsunday";break;
         cout<<"\nmonday";break;
         cout<<"\ntuesday";break;
        cout<<"\nwednesday";break;
        cout<<"\nthusday";break;
        cout<<"\nfrisday";break;
        cout<<"\nsaturday";break;
        cout<<"\ndoes not exsist";break;
    }
}