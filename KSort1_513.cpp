#include<iostream>
using namespace std;
int main()
{
    int n,k,v[1001],nr=0,u[1001];
    cin>>n>>k;
    for(int i=1;i<=n;i++)
        cin>>v[i];
    for(int i=1;i<=k;i++)
    {
        nr=0;
        for(int j=i;j<=n;j=j+k)
        {
            u[nr]=v[j];
            nr++;
        }
        for(int a=0;a<nr-1;a++)
            for(int b=a+1;b<nr;b++)
                if(u[a]>u[b]) swap(u[a],u[b]);
        nr=0;
        for(int j=i;j<=n;j=j+k)
        {
            v[j]=u[nr];
            nr++;
        }
    }
    for(int i=1;i<=n;i++)
        cout<<v[i]<<" ";


    /*for(int i=1;i<=k;i++)
    {
        nr=0;
        for(int j=i;j<=n;j++)
        {
            if(j==nr*k+i) {u[nr]=v[j];nr++;}
        }
        for(int a=0;a<nr-1;a++)
            for(int b=a+1;b<nr;b++)
                if(u[a]>u[b]) swap(u[a],u[b]);
        for(int a=0;a<nr;a++)
            cout<<u[a]<<" ";
    }*/
}