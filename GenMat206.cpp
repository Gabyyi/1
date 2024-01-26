#include<iostream>
using namespace std;
int main()
{
    int a[21][21],n,m,i,j;
    cin>>n>>m;
    for(i=1;i<=n;i++)
    for(j=1;j<=m;j++)
        a[i][j]=min(i,j);//if(i<j) a[i][j]=i; else a[i][j]=j;
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=m;j++)
            cout<<a[i][j]<<' ';
        cout<<endl;
    }
    return 0;
}