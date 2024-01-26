#include<iostream>
using namespace std;
int main()
{
    int n,a[7][7],x=1,y=1;
    cin>>n;
    a[1][1]=1;
    a[1][2]=1;
    for(int i=3;i<=n;i++)
    {
        a[1][i]=x+y;
        x=y;
        y=a[1][i];
    }
    for(int i=2;i<=n;i++)
    {
        if(i%2==0)
        {
            for(int j=n;j>=1;j--)
            {
                a[i][j]=x+y;
                x=y;
                y=a[i][j];
            }
        }
        else
        {
            for(int j=1;j<=n;j++)
            {
                a[i][j]=x+y;
                x=y;
                y=a[i][j];
            }
        }
    }
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=n;j++)
            cout<<a[i][j]<<" ";
        cout<<endl;
    }
}