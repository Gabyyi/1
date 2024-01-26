#include<iostream>
#include<fstream>
using namespace std;
int main()
{
    ifstream cin("exista.in");
    ofstream cout("exista.out");
    int m,n,k,a[11][11],ok,s=-1;
    cin>>k>>m>>n;
    for(int i=1;i<=m;i++)
        for(int j=1;j<=n;j++)
            cin>>a[i][j];
    for(int j=1;j<=n;j++)
    {
        ok=0;
        for(int i=1;i<=m;i++)
            if(a[i][j]==k) ok=1;
        if(ok==1) s=s+j;
    }
    if(s!=-1) cout<<s+1;
    else cout<<"NU EXISTA";
}