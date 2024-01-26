#include<iostream>
using namespace std;
long long sumadiv(int x)
{
    long long s=0;
    int i;
    for(i=1;i*i<x;i++)
        if(x%i==0) s=s+i+x/i;
    if(i*i==x) s=s+i;
    return s;
}
int main()
{
    int n,x,v[1001],c=0;
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        cin>>x;
        v[i]=sumadiv(x);
    }
    for(int i=1;i<n;i++)
        for(int j=i+1;j<=n;j++)
            if(v[i]==v[j]) c++;
    cout<<c;
}
