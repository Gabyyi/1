#include<iostream>
using namespace std;
int main()
{
    int n,m,k=0,a[10][10];
    cin>>n;
    m=n;
    while(m!=0)
    {
        k++;
        m/=10;
    }
    for(int i=1;i<=k;i++)
    {
        m=n;
        for(int j=1;j<=k;j++)
        {
            a[i][j]=m%10;
            m=m/10;
        }
    }
    for(int i=1;i<=k;i++)
    {
        for(int j=1;j<=k;j++)
            cout<<a[i][j]<<' ';
        cout<<endl;
    }
}