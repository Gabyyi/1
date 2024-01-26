#include<iostream>
#include<cmath>
using namespace std;
void sub(int &n, int k)
{
    int m,nr=0,nr1,x,p,q;
    m=n;
    while(m!=0)
    {
        nr++;
        if(m%10==k) nr1=nr;
        m/=10;
    }
    p=pow(10,nr1-1);
    m=n%p;
    q=pow(10,nr1);
    x=n/q*p+m;
    n=x;
}
int main()
{
    int a,b,nr=0,i;
    cin>>a>>b;
    for(i=0;i<=9;i++)
        if(sub(a,i)!=a && sub(b,i)!=b) nr++;
    cout<<nr;
}