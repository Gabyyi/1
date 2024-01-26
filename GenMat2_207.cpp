#include<iostream>
using namespace std;
int main()
{
    int n,a[25][25],m=0;
    cin>>n;
    m=n;
    for(int j=1;j<=n;j++)
    {
        for(int i=1;i<=n;i++)
        {
            if(i!=j) a[i][j]=m;
            else a[i][j]=0;
        }
        m--;
    }
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=n;j++)
            cout<<a[i][j]<<" ";
        cout<<endl;
    }
}