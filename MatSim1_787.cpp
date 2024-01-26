#include<iostream>
using namespace std;
int main()
{
    int n,a[101][101];
    cin>>n;
    for(int i=1;i<=n;i++)
        for(int j=1;j<=n;j++)
            cin>>a[i][j];
    for(int j=n;j>=1;j--)
    {
        for(int i=n;i>=1;i--)
            cout<<a[i][j]<<" ";
        cout<<endl;
    }
}