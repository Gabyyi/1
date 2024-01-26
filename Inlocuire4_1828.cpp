#include<iostream>
using namespace std;
void citire(int v[],int &n)
{
    cin>>n;
    for(int i=1;i<=n;i++)
        cin>>v[i];
}
int redus(int x)
{
    int y=1,e,f;
    e=0;
    while(x%2==0)
    {
        x=x/2;
        e++;
    }
    if(e>0) y=y*2;
    f=3;
    while(f*f<=x)
    {
        e=0;
        while(x%f==0)
        {
            x=x/f;
            e++;
        }
        if(e>0) y=y*f;
        f=f+2;
    }
    if(x!=1) y=y*x;
    return y;
}
void inloc(int v[],int n)
{
    for(int i=1;i<=n;i++)
    {
        v[i]=redus(v[i]);
    }
}
void sortare(int v[],int n)
{
    for(int i=1;i<n;i++)
        for(int j=i+1;j<=n;j++)
            if(v[i]<v[j]) swap(v[i],v[j]);
}
void afisare(int v[],int n)
{
    for(int i=1;i<=n;i++)
        cout<<v[i]<<" ";
}
int main()
{
    int v[1001],n;
    citire(v,n);
    inloc(v,n);
    sortare(v,n);
    afisare(v,n);
}