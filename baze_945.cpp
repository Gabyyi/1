#include<iostream>
#include<cmath>
using namespace std;
int nrcifre(int x)
{
    int nr=0;
    while(x!=0)
    {
        x/=10;
        nr++;
    }
    return nr;
}
int main()
{
    int n,b,c,m=0,nr=0,p=0;
    cin>>n>>b>>c;
    nr=nrcifre(n);
    while(n!=0)
    {
        m=m+(n%10)*pow(b,nr-(nr-p));
        p++;
        n/=10;
    }
    /*p=1;
    while(m!=0)
    {
        q=q+(m%c)*p;
        p*=10;
        m/=c;
    }
    cout<<q;*/
    int k=0,x[100];
    while(m!=0)
    {
        k++;
        x[k]=m%c;
        m=m/c;
    }
    for(int i=k;i>=1;i--)
        cout<<x[i];
}