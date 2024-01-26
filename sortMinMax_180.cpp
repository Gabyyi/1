#include<iostream>
using namespace std;
int main()
{
    int n,v[1001],min=1000001,max=0,pmin=0,pmax=0;
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        cin>>v[i];
        if(v[i]>max) {max=v[i];pmax=i;}
        else if(v[i]<min) {min=v[i];pmin=i;}
    }
    if(pmin>pmax) swap(pmin,pmax);
    for(int i=pmin;i<pmax;i++)
        for(int j=i+1;j<=pmax;j++)
            if(v[i]>v[j]) swap(v[i],v[j]);
    for(int i=1;i<=n;i++)
        cout<<v[i]<<" ";
}