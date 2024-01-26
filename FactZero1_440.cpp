#include<iostream>
using namespace std;
int main()
{
    int n,a=0,b=0,p=1,x,r;
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        x=i;
        while(x%2==0) {x/=2;a++;}
        while(x%5==0) {x/=5;b++;}
        p=p*x%10;
    }
    r=(a-b)%4;
    if(r==1) cout<<2*p%10;
    else if(r==2) cout<<4*p%10;
    else if(r==3) cout<<8*p%10;
    else cout<<6*p%10;
}