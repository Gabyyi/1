#include<iostream>
using namespace std;
int main()
{
    int n,k=1;
    float a[51][51],v[51],m=0;
    cin>>n;
    for(int i=1;i<=n;i++)
        for(int j=1;j<=n;j++)
            cin>>a[i][j];
    for(int j=1;j<=n;j++)
    {
        for(int i=1;i<=n;i++)
            m=a[i][j]+m;
        v[k]=m/n;
        k++;
        m=0;
    }
    n++;
    for(int i=n;i>n/2;i--)
        for(int j=1;j<n;j++)
            a[i][j]=a[i-1][j];
    for(int j=1;j<n;j++)
        a[n/2+1][j]=v[j];
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<n;j++)
            cout<<a[i][j]<<" ";
        cout<<endl;
    }
}