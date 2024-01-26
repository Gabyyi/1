#include<iostream>
using namespace std;
int main()
{
    int n,m,a[101][101],x,k=0;
    cin>>n>>m;
    for(int i=1;i<=n;i++)
        for(int j=1;j<=m;j++)
            cin>>a[i][j];
    cin>>x;
    for(int i=1;i<=n;i++)
    {
        if(a[i][1]==x || a[i][m]==x) k=1;
        for(int j=1;j<=m;j++)
            if(a[1][j]==x || a[n][j]==x) k=1;
    }
    if(k!=0) cout<<"DA";
    else cout<<"NU";
}