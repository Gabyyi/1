#include<iostream>
using namespace std;
int main()
{
    int n,S,v[1001],s=0,k=0,p=0;
    cin>>n>>S;
    for(int i=1;i<=n;i++)
        cin>>v[i];
    for(int i=1;i<n;i++)
        for(int j=i+1;j<=n;j++)
            if(v[i]>v[j]) swap(v[i],v[j]);
    for(int i=1;i<=n;i++)
    {
        s=s+v[i];
        if(s<=S) k++;
        else if(s>S) {p=s-S;break;}
    }
    cout<<k<<" "<<p;
}