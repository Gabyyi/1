#include<iostream>
using namespace std;
int main()
{
    int n,k,a[101][101];
    cin>>n>>k;
    for(int i=1;i<=n;i++)
        for(int j=1;j<=n;j++)
        {
            if(i==j)
            {
                a[i][j]=1;
                a[i][n-j+1]=1;
            }
            else a[i][j]=2;
        }
    for(int i=1;i<n;i++)
        for(int j=i+1;j<=i+k;j++)
            a[i][j]=1;
    for(int i=2;i<=n;i++)
        for(int j=i-1;j>=i-k;j--)
            a[i][j]=1;
    for(int i=1;i<n;i++)
        for(int j=n-i+2;j>=n-i+1-k;j--)
            a[i][j]=1;
    for(int i=2;i<=n;i++)
        for(int j=n-i+2;j<=n-i+1+k;j++)
            a[i][j]=1;
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=n;j++)
            cout<<a[i][j]<<" ";
        cout<<endl;
    }


    /*for(int i=1;i<=n;i++)
        for(int j=1;j<=n;j++)
        {
            if(abs(i-j)<=k || abs((i+j)-(n+1))<=k) a[i][j]=1;
            else a[i][j]=2;
        }
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=n;j++)
            cout<<a[i][j]<<" ";
        cout<<endl;
    }*/
}