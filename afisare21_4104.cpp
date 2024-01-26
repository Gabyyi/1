#include<iostream>
using namespace std;
int main()
{
    int n,m,x[10001],y[10001],ok=1,k=0,min=1000000001;
    cin>>n;
    for(int i=1;i<=n;i++)
        cin>>x[i];
    cin>>m;
    for(int i=1;i<=m;i++)
    {
        cin>>y[i];
        if(y[i]<min) min=y[i];
    }
    for(int i=1;i<=n;i++)
    {
        if(x[i]<min)
        {
            cout<<x[i];
            k++;
        }
    }
    if(k==0) cout<<"NU EXISTA";
}




















/*for(int i=1;i<=n;i++)
    {
        ok=1;
        if(x[i]>=min) {ok=0;k++;}
        if(ok==1) cout<<x[i]<<" ";
    }
    if(k==n*m) cout<<"NU EXISTA";
    */