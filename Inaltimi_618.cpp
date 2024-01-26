#include<iostream>
using namespace std;
struct elev
{
    int h,nr;
}v[1001];

int main()
{
    int n;
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        cin>>v[i].h;
        v[i].nr=i;
    }
    for(int i=1;i<n;i++)
        for(int j=i+1;j<=n;j++)
            if(v[i].h>v[j].h) swap(v[i],v[j]);
    for(int i=1;i<=n;i++)
        cout<<v[i].nr<<" ";
}