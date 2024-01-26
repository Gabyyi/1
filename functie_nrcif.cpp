#include<iostream>
#include<cmath>
using namespace std;
int S1(long long n)
{
    int nr=0;
    while(n!=0)
    {
        nr++;
        n/=10;
    }
    return nr;
}
int S2(long long n, int k)
{
    long long m=0,p=0;
    int x=0,q=0;
    while(n%10==0)
    {
        x++;
        n/=10;
    }
    while(n!=0)
    {
        if(n%10==k)
            m=(m*10+k)*10+k;
        else m=m*10+n%10;
        n/=10;
    }
    while(m!=0)
    {
        p=p*10+m%10;
        m/=10;
    }
    q=pow(10,2*x);
    p=p*q;
    return p;
}
int main()
{
    int n,a,b,nr1,nr2;
    long long m;
    cin>>n>>a>>b;
    nr1=S1(n);
    m=S2(n,a);
    nr2=S1(S2(m,b));
    cout<<2*nr1-nr2;
}