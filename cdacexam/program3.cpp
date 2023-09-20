//wap to print prime numbers between two numbers
#include<iostream>
using namespace std;
int main()
{
    int n,i,j,n1,n2,count;
    cout<<" enter the range from:";
    cin>>n1;
    cout<<"enter the range upto:";
    cin>>n2;
  for(i=n1;i<=n2;i++)
  {
    count=0;
    for (j=1;j<=n2;j++)
    {
        if(i%j==0)
        count++;
    }
    if(count==2)
{
    cout<<"\n"<<i;
}
  }
  


}
