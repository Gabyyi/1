#include<iostream>
#include<fstream>
using namespace std;
int main()
{
    ifstream cin("masini.in");
    ofstream cout("masini.out");
    int n,T,v[1001],s=0,k=0;
    cin>>n>>T;
    for(int i=1;i<=n;i++)
        cin>>v[i];
    for(int i=1;i<n;i++)
        for(int j=i+1;j<=n;j++)
            if(v[i]>v[j]) swap(v[i],v[j]);
    for(int i=1;i<=n;i++)
    {
        s=s+v[i];
        if(s<=T) k++;
    }
    cout<<k;
}