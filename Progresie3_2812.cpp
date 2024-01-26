#include<iostream>
#include<fstream>
using namespace std;
int main()
{
    ifstream cin("progresie3.in");
    ofstream cout("progresie3.out");
    int n,v[1001],u[1001],k=0,r=0,ok=1;
    while(cin>>n)
    {
        v[n]=1;
    }
    for(int i=1;i<=1000;i++)
        if(v[i]==1) {k++;u[k]=i;}
    r=u[2]-u[1];
    for(int i=3;i<=k;i++)
        if((u[i]-u[i-1])!=r) {ok=0;break;}
    if(ok==0) cout<<"NU";
    else cout<<r;



/*
    int x,p,d,u,r;
    bool v[1001],ok=1;
    while(cin>>x)
    {
        v[x]=1;
    }
    for(int i=0;i<=1000;i++)
        if(v[i]==1) {p=i;break;}
    for(int i=p+1;i<=1000;i++)
        if(v[i]==1) {d=i;break;}
    r=d-p;
    u=d;
    for(int i=d+1;i<=1000;i++)
        if(v[i]==1)
        {
            if(i!=u+r) {ok=0;break;}
            u=i;
        }
    if(ok==1) cout<<r;
*/
}