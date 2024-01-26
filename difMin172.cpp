#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    int n,a,b,x=0,y=0,difmin=1000000000,smin=2000000000;
    cin>>n;
    cin>>a;
    for(int i=2;i<=n;i++)
    {
        cin>>b;
        if(abs(b-a)==difmin)
        {
            if((a+b)<smin)
            {
                smin=a+b;
                x=a;y=b;
            }
        }
        if(abs(b-a)<difmin)
        {
            difmin=abs(b-a);
            smin=a+b;
            x=a;y=b;
        }
        a=b;
    }
    cout<<x<<" "<<y;
}