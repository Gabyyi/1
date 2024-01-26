#include<iostream>
#include<fstream>
using namespace std;
int main()
{
    ifstream cin("maxminmatrice.in");
    ofstream cout("maxminmatrice.out");
    int m,n,a[24][24],x=1001,y=0;
    cin>>m>>n;
    for(int i=1;i<=m;i++)
        for(int j=1;j<=n;j++)
            cin>>a[i][j];
    for(int i=1;i<=m;i++)
    {
        x=1001;
        for(int j=1;j<=n;j++)
            if(a[i][j]<x) x=a[i][j];
        if(x>y) y=x;
    }
    cout<<y;
}