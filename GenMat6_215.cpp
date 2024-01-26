#include<iostream>
using namespace std;
int main()
{
    int n,c,a[7][7];
    cin>>n;
    for(int i=1;i<=6;i++)
    {
        c=n%10;
        for(int j=i;j<=6;j++)
        {
            a[i][j]=c;
            a[j][i]=c;
        }
        n/=10;
    }
    for(int i=1;i<=6;i++)
        a[i][i]=0;
    for(int i=1;i<=6;i++)
    {
        for(int j=1;j<=6;j++)
            cout<<a[i][j]<<' ';
        cout<<endl;
    }
}