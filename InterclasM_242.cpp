#include <iostream>
#include <fstream>
using namespace std;
int main()
{
    ifstream cin("interclasm.in");
    ofstream cout("interclasm.out");
    int x,y,n,m,c[200001],k=0;
    cin>>x;
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        cin>>y;
        k++;                                 //?????????????????????
        c[k]=y;
    }
    cin>>m;
    for(int i=1;i<=m;i++)
    {
        cin>>y;
        k++;
        c[k]=y;
    }
    for(int i=1;i<k;i++)
        for(int j=i+1;j<=k;j++)
            if(c[i]>c[j]) swap(c[i],c[j]);
    if(c[1]!=c[2] && c[1]%x==0) cout<<c[1];
    for(int i=2;i<k;i++)
        if(c[i]!=c[i-1] && c[i]!=c[i+1])
            if(c[i]%x==0) cout<<c[i]<<' ';
    if(c[k-1]!=c[k] && c[k]%x==0) cout<<c[k];
}