#include<iostream>
using namespace std;
int produs_fact(int n)
{
    int f,e,p=1;
    e=0;
    while(n%2==0)
    {
        e++;
        n/=2;
    }
    if(e!=0) p=p*2;
    f=3;
    while(f*f<=n)
    {
        e=0;
        while(n%f==0)
        {
            e++;
            n=n/f;
        }
        if(e!=0) p=p*f;
        f=f+2;
    }
    if(n!=1) p=p*n;
    return p;
}
int main()
{
    int n,m;
    cin>>n>>m;
    if(produs_fact(n)>produs_fact(m)) cout<<n;
    if(produs_fact(n)<produs_fact(m)) cout<<m;
    if(produs_fact(n)==produs_fact(m))
    {
        if(n>m) cout<<m;
        else cout<<n;
    }
}