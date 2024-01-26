#include<iostream>
using namespace std;
int main()
{
    int n,a[25][25];
    cin>>n;
    for(int i=1;i<=n;i++)
        for(int j=1;j<=n;j++)
            a[i][j]=0;
    for(int i=1;i<=n/2;i++)
        for(int j=i+1;j<=n-i;j++)
            a[i][j]=1;
    for(int i=n/2+2;i<=n;i++)
        for(int j=n-i+2;j<i;j++)
            a[i][j]=2;
    for(int i=2;i<n;i++)
        for(int j=1;j<=n;j++)
            if(i!=j && j!=(n-i+1))
                if(a[i][j]==0) a[i][j]=3;
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=n;j++)
            cout<<a[i][j]<<' ';
        cout<<endl;
    }
}