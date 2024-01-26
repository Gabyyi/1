#include<iostream>
using namespace std;
int main()
{
    int n,m,a[21][21],x=1;
    cin>>n>>m;
    for(int i=1;i<=n;i++)
        for(int j=1;j<=m;j++)
        {
            a[i][j]=x*x;
            x=x+2;
        }
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=m;j++)
            cout<<a[i][j]<<" ";
        cout<<endl;
    }
}