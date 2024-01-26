#include<iostream>
using namespace std;
int main()
{
    int n,v[1001],ok=1;
    cin>>n;
    for(int i=1;i<=n;i++)
        cin>>v[i];
    for(int i=1;i<=n-2;i++)
    {
        if(v[i]<v[i+1] && v[i+1]<v[i+2]) ok=0;
        else if(v[i]>v[i+1] && v[i+1]>v[i+2]) ok=0;
        else if(v[i]==v[i+1]) ok=0;
    }
    /*if(v[1]==v[2]) ok=0;
    else if(v[1]<v[2])
    {
        for(int i=3;i<=n;i++)
            if(i%2!=0 && v[i]<=v[i-1]) {ok=0;break;}
            else if(i%2==0 && v[i]>v[i-1]) {ok=0;break;}
    }
    else
    {
        for(int i=3;i<=n;i++)
            if(i%2!=0 && v[i]>=v[i-1]) {ok=0;break;}
            else if(i%2==0 && v[i]<=v[i-1]) {ok=0;break;}
    }*/
    if(ok==1) cout<<"DA";
    else cout<<"NU";
}