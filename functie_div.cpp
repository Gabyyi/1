#include<iostream>
using namespace std;
int produs(int a)
{
    int p=1,e=0,f=3;
    while(a%2==0)
    {
        e++;
        a/=2;
    }
    if(e>0) p=p*2;
    while(f*f<=a)
    {
        e=0;
        while(a%f==0)
        {
            e++;
            a/=f;
        }
        if(e>0) p=p*f;
        f=f+2;
    }
    if(a!=1) p=p*a;
    return p;
}
int main()
{
    int a,b,c;
    cin>>a>>b>>c;
    if(produs(a)==produs(b) && produs(a)==produs(c) && produs(b)==produs(c)) cout<<"DA";
    else cout<<"NU";
}