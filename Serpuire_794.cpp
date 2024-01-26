#include<iostream>
using namespace std;
int main()
{
    int n,a[26][26];
    cin>>n;
    for(int i=1;i<=n;i++)
        for(int j=1;j<=n;j++)
            cin>>a[i][j];
    cout<<a[1][1]<<" ";
    for(int s=3;s<2*n;s++)
    {
        if(s%2==0)
        {
            for(int i=1;i<=n;i++)
                if(s-i>=1 && s-i<=n) cout<<a[i][s-i]<<" ";
        }
        else
        {
            for(int i=n;i>=1;i--)
                if(s-i>=1 && s-i<=n) cout<<a[i][s-i]<<" ";
        }
    }
    cout<<a[n][n];
}