#include<iostream>
using namespace std;
int main()
{
    int n,v[1001],k,S=0;
    cin>>n;
    for(int i=1;i<=n;i++)
        cin>>v[i];
    cin>>k;
    for(int i=1;i<n;i++)
        for(int j=i+1;j<=n;j++)
            if(v[i]>v[j]) swap(v[i],v[j]);
    for(int i=1;i<=k;i++)
        v[i]=v[i]*(-1);
    for(int i=1;i<=n;i++)
        S=S+v[i];
    cout<<S;
}