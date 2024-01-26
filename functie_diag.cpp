#include<iostream>
using namespace std;
int matdiag(int n, int a[][101])
{
    int ok=1,s=0;
    for(int i=1;i<=n;i++)
    {
        s=0;
        for(int j=1;j<=n;j++)
            if(i!=j) s=s+a[i][j];
        if(a[i][i]<s) {ok=0;break;}
    }
    if(ok==0) return 0;
    else return 1;
}
int main()
{
    int n,a[101][101];
    cin>>n;
    for(int i=1;i<=n;i++)
        for(int j=1;j<=n;j++)
            cin>>a[i][j];
    cout<<matdiag(n,a);
}