#include<iostream>
using namespace std;
int main()
{
    int n,a,b,A[25][25];
    cin>>n>>a>>b;
    for(int i=1;i<=n;i++)
        for(int j=1;j<=n;j++)
            A[i][j]=0;
    for(int i=1;i<a;i++)
        for(int j=1;j<b;j++)
            A[i][j]=1;
    for(int i=1;i<a;i++)
        for(int j=b+1;j<=n;j++)
            A[i][j]=2;
    for(int i=a+1;i<=n;i++)
        for(int j=1;j<b;j++)
            A[i][j]=3;
    for(int i=a+1;i<=n;i++)
        for(int j=b+1;j<=n;j++)
            A[i][j]=4;
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=n;j++)
            cout<<A[i][j]<<' ';
        cout<<endl;
    }
}