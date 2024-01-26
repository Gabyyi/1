#include<iostream>
#include<fstream>
using namespace std;
int main()
{
    //ifstream cin("rotire.in");
    //ofstream cout("rotire.out");
    int m,n,a[11][11],b[11][11];
    cin>>m>>n;
    for(int i=1;i<=m;i++)
        for(int j=1;j<=n;j++)
            cin>>a[i][j];
    /*for(int j=n;j>=1;j--)
    {
        for(int i=1;i<=m;i++)
            cout<<a[i][j]<<" ";
        cout<<endl;
    }*/


    for(int i=1;i<=n;i++)
        for(int j=1;j<=m;j++)
            b[i][j]=a[j][n-i+1];
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=m;j++)
            cout<<b[i][j]<<" ";
        cout<<endl;
    }
}