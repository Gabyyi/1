#include<iostream>
using namespace std;
int main()
{
    int n,m,a[51][51],k=1,x=0,ok=0;
    cin>>n>>m;
    for(int i=1;i<=n;i++)
        for(int j=1;j<=m;j++)
            cin>>a[i][j];
    for(int j=1;j<=m;j++)
    {
        k=1;x=0;
        for(int i=1;i<n;i++)
            if(a[i][j]==a[i+1][j]) {k++;x=a[i][j];}
        if(k==n) {cout<<x<<" ";ok=1;}
    }
    if(ok==0) cout<<"nu exista";
}