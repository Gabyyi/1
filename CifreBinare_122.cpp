#include<iostream>
using namespace std;
int main()
{
    int a,b,r1=0,r2=0,x,y;
    cin>>a>>b;
    x=a;
    while(x!=1)
    {
        if(x%2==1) r1++;
        x/=2;
    }
    y=b;
    while(y!=1)
    {
        if(y%2==1) r2++;
        y/=2;
    }
    if(r1>r2) cout<<a;
    else if(r2>r1) cout<<b;
    else if(r1==r2) cout<<min(a,b);
}