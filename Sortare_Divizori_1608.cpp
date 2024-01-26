#include<iostream>
#include<fstream>
using namespace std;
/*int nrdiv(int x)
{
    int nr=0,i;
    for(i=1;i*i<x;i++)
        if(x%i==0) nr=nr+2;
    if(i*i==x) nr++;
    return nr;
}*/
int nrdiv(int x)
{
    int e=0,f=3,nr=1;
    while(x%2==0)
    {
        x/=2;
        e++;
    }
    nr=nr*(e+1);
    while(f*f<=x)
    {
        e=0;
        while(x%f==0)
        {
            x/=f;
            e++;
        }
        nr=nr*(e+1);
        f=f+2;
    }
    if(x!=1) nr=nr*2;
    return nr;
}
int main()
{
    ifstream cin("sortare_divizori.in");
    ofstream cout("sortare_divizori.out");
    int n,v[1001],div[1001];
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        cin>>v[i];
        div[i]=nrdiv(v[i]);
    }
    for(int i=1;i<n;i++)
        for(int j=i+1;j<=n;j++)
        {
            if(div[i]<div[j]) {swap(v[i],v[j]);swap(div[i],div[j]);}
            else if(div[i]==div[j])
                if(v[i]>v[j]) swap(v[i],v[j]);
        }
    for(int i=1;i<=n;i++)
        cout<<v[i]<<' ';
}