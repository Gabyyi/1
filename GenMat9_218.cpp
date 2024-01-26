#include<iostream>
using namespace std;
int main()
{
    int n,a[16][16];
    cin>>n;
    for(int j=1;j<=n;j++)
    {
        a[1][j]=1+j;
        a[n][j]=n+j;
    }
    for(int i=1;i<=n;i++)
    {
        a[i][1]=i+1;
        a[i][n]=i+n;
    }
    for(int i=2;i<n;i++)
        for(int j=2;j<n;j++)
            a[i][j]=a[i-1][j-1]+a[i-1][j]+a[i-1][j+1];
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=n;j++)
            cout<<a[i][j]<<' ';
        cout<<endl;
    }
}