#include<iostream>
#include<fstream>
using namespace std;
int main()
{
    ifstream cin("spirala.in");
    ofstream cout("spirala.out");
    int n,a[24][24];
    cin>>n;
    for(int i=1;i<=n;i++)
        for(int j=1;j<=n;j++)
            cin>>a[i][j];
    for(int i=1;i<=n/2;i++)
    {
        for(int j=i;j<n-i+1;j++)
            cout<<a[i][j]<<" ";
        for(int j=i;j<n-i+1;j++)
            cout<<a[j][n-i+1]<<" ";
        for(int j=n-i+1;j>i;j--)
            cout<<a[n-i+1][j]<<" ";
        for(int j=n-i+1;j>i;j--)
            cout<<a[j][i]<<" ";
    }
    if(n%2!=0) cout<<a[n/2+1][n/2+1];
}