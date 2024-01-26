#include<iostream>
using namespace std;
long long nrmaxim(long long n)
{
    long long p,c=0,maxim=0,m=1;
    int nr,aux,i;
    p=n;nr=0;
    while(p!=0)
    {
        nr++;
        p/=10;
    }
    p=0;i=1;maxim=n;aux=nr;
    while(aux!=1)
    {
        m=m*10;
        aux--;
    }
    while(i<=nr)
    {
        c=n%m;
        n=n/m;
        p=c*10+n;
        if(maxim<=p) maxim=p;
        n=p;
        i++;
    }
    return maxim;
}
int main()
{
    int n,maxim;
    cin>>n;
    cout<<nrmaxim(n);
}