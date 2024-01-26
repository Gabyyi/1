#include<iostream>
using namespace std;
int main()
{
    int a[100][100],n,k;
    cin>>k>>n;
    for(int i=1;i<=n;i++)
        for(int j=1;j<=n;j++)
            a[i][j]=0;
    a[1][1]=k;
    for(int i=1;i<=n;i++)
        for(int j=1;j<=n;j++)
        {
            if(i==j) a[i][j]=a[1][1]*i;
            else if(i<j) a[i][j]=a[i][j-1]+1;
            //else if(i>j) a[i][j]=a[i][j+1]-1;
        }
    /*for(int i=1;i<=n-1;i++)
        for(int j=i+1;j<=n;j++)
            a[i][j]=a[i][j-1]+1;*/
    for(int i=n;i>=2;i--)
        for(int j=n-1;j>=1;j--)
            a[i][j]=a[i][j+1]-1;
    for(int i=1;i<=n;i++)
    {
        cout<<endl;
        for(int j=1;j<=n;j++)
            cout<<a[i][j]<<" ";
    }
}