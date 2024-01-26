#include<iostream>
using namespace std;
int main()
{
    int n,m,a[51][51],x=10001,y=10001,p1=0,p2=0;
    cin>>n>>m;
    for(int i=1;i<=n;i++)
        for(int j=1;j<=m;j++)
            cin>>a[i][j];
    for(int i=1;i<=n;i++)
    {
        if(a[i][1]<x)
        {
            x=a[i][1];
            p1=i;
        }
        if(a[i][m]<y)
        {
            y=a[i][m];
            p2=i;
        }
    }
    swap(a[p1][1],a[p2][m]);
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=m;j++)
            cout<<a[i][j]<<" ";
        cout<<endl;
    }
    
}