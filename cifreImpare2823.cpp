#include<iostream>
using namespace std;
long long cifreImpare(long long n)
{
    long long nr=0,nrpar=0,nrimp=0,s=0,c=0,s1=0,x=0;
    while(n!=0)
    {
        c=n%10;
        nr++;
        if(c%2==1) nrimp++;
        else if(c%2==1)
        {
            nrpar++;
            s=s*10+c;
        }
        n/=10;
    }
    while(s!=0)
    {
        x=s%10;
        s1=s1*10+x;
        s/=10;
    }
    if(nrpar==nr || nrimp==nr) return -1;
    else return s1;
}
int main()
{
    int n,s1;
    cin>>n;
    cifreImpare(n);
    cout<<s1;
}