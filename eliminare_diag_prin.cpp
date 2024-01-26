#include<iostream>
using namespace std;
int main()
{
    int a[101][101],n;
    cin>>n;
    for(int i=1;i<=n;i++)
        for(int j=1;j<=n;j++)
            cin>>a[i][j];
  /*  for(int i=2;i<=n;i++)
        for(int j=i;j>=1;j--)
            swap(a[i][j],a[i][j-1]);
    for(int i=1;i<=n;i++)
    {
        cout<<endl;
        for(int j=2;j<=n;j++)
            cout<<a[i][j]<<" ";
    }*/

    for(int i=1;i<n;i++)
        for(int j=i+1;j<=n;j++)
            a[i][j-1]=a[i][j];
    for(int i=1;i<=n;i++)
    {
        cout<<endl;
        for(int j=1;j<n;j++)
            cout<<a[i][j]<<" ";
    }
}
/*
4
20 30 80 52
71 93 64 51
62 81 55 49
90 65 32 22
*/