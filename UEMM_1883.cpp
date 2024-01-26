#include<iostream>
using namespace std;
int main()
{
    int n,v[1001],ok=0;
    cin>>n;
    for(int i=1;i<=n;i++)
        cin>>v[i];
    for(int i=1;i<n;i++)
    {
        ok=0;
        for(int j=i+1;j<=n;j++)
            if(v[j]>v[i] && ok==0) {cout<<v[j]<<" ";ok=1;}
        if(ok==0) cout<<-1<<" ";
    }
    cout<<-1;
}