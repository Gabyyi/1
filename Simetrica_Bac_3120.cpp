#include<iostream>
using namespace std;
int main()
{
    int m,n,a[22][22],ok=1;
    cin>>m>>n;
    for(int i=1;i<=m;i++)
        for(int j=1;j<=n;j++)
            cin>>a[i][j];
    for(int i=1;i<=m;i++)
    {
        for(int j=1;j<=n/2;j++)
            if(a[i][j]!=a[i][n-j+1]) ok=0;
    }
    if(ok==1) cout<<"DA";
    else cout<<"NU";
}