#include<iostream>
using namespace std;
int main()
{
    int n,x,y[501],ok=1,rez[11];
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        cin>>x;
        ok=1;
        for(int j=1;j<=x;j++)
            cin>>y[j];
        for(int j=2;j<=x;j++)
            if(y[j]<y[j-1]) ok=0;
        if(ok==1) rez[i]=1;
        else rez[i]=0;
    }
    for(int i=1;i<=n;i++)
        cout<<rez[i]<<" ";
}