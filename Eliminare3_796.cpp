#include<iostream>
using namespace std;
int main()
{
    int n,m,a[51][51];
    cin>>n>>m;
    for(int i=1;i<=n;i++)
        for(int j=1;j<=m;j++)
            cin>>a[i][j];
    for(int j=1;j<=m;j++)
        a[n-1][j]=a[n][j];
    for(int i=1;i<=n;i++)
        a[i][m-1]=a[i][m];
    for(int i=1;i<n;i++)
    {
        for(int j=1;j<m;j++)
            cout<<a[i][j]<<" ";
        cout<<endl;
    }
}