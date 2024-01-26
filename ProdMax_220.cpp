#include<iostream>
#include<fstream>
using namespace std;
int main()
{
    ifstream cin("prodmax.in");
    ofstream cout("prodmax.out");
    int m,n,a[101][101],k,v[101],max=-1;
    cin>>m>>n;
    for(int i=1;i<=m;i++)
        for(int j=1;j<=n;j++)
            cin>>a[i][j];
    for(int j=1;j<=n;j++)
    {
        k=0;
        for(int i=1;i<=m;i++)
        {
            if(a[i][j]==0) {v[j]=0;break;}
            else if(a[i][j]==2) k++;
        }
        v[j]=k;
        if(k>max) max=k;
        
    }
    for(int j=1;j<=n;j++)
        if(v[j]==max) cout<<j<<" ";
}