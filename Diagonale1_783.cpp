#include<iostream>
using namespace std;
int main()
{
    int n,a[101][101],S=0;
    cin>>n;
    for(int i=1;i<=n;i++)
        for(int j=1;j<=n;j++)
            cin>>a[i][j];
    for(int i=1;i<n;i++)
        S=S+a[i][i+1];
    for(int i=2;i<=n;i++)
        S=S+a[i][i-1];
    cout<<S;
}