#include<iostream>
using namespace std;
int main()
{
    int n,v[1001];
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        cin>>v[i];
        while(v[i]>9)
        {
            v[i]/=10;
        }
    }
    for(int i=1;i<n;i++)
        for(int j=i+1;j<=n;j++)
            if(v[i]>v[j]) swap(v[i],v[j]);
    for(int i=1;i<=n;i++)
        cout<<v[i];
}