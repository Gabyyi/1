#include<iostream>
using namespace std;
int suma_fact(int n)
{
    int f,e,s=0;
    e=0;
    while(n%2==0)
    {
        e++;
        n/=2;
    }
    if(e!=0) s=s+2;
    f=3;
    while(f*f<=n)
    {
        e=0;
        while(n%f==0)
        {
            e++;
            n=n/f;
        }
        if(e!=0) s=s+f;
        f=f+2;
    }
    if(n!=1) s=s+n;
    return s;
}
int main()
{
    int n,m;
    cin>>n>>m;
    if(suma_fact(n)>suma_fact(m)) cout<<n;
    if(suma_fact(n)<suma_fact(m)) cout<<m;
    if(suma_fact(n)==suma_fact(m))
    {
        if(n>m) cout<<m;
        else cout<<n;
    }
}