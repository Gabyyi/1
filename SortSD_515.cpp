#include<iostream>
using namespace std;
int sumadiv(int x)
{
    int j=0,s=0;
    for(j=1;j*j<x;j++)
        if(x%j==0) s=s+j+x/j;
    if(j*j==x) s=s+j;
    return s;
}
int main()
{
    int n,v[1001],sd[1001];
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        cin>>v[i];
        sd[i]=sumadiv(v[i]);
    }
    for(int i=1;i<n;i++)
        for(int j=i+1;j<=n;j++)
        {
            if(sd[i]>sd[j]) {swap(v[i],v[j]);swap(sd[i],sd[j]);}
            else if(sd[i]==sd[j])
                if(v[i]>v[j]) swap(v[i],v[j]);
        }
    for(int i=1;i<=n;i++)
        cout<<v[i]<<" ";
}