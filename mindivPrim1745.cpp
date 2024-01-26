#include<iostream>
using namespace std;
long long minDivPrim(long long n)
{
   /* int d=2,p=1;
    while(n>1)
    {
        if(n%d==0)
        {
            p=p*d;
            while(n%d==0)
            n=n/d;
        }
        d++;
       // if(d*d>n) d=n;
    }
    return p;*/
    long long i,p=1;
    for(i=2;i<=n;i++)
    {
        while(n%i==0)
        {
            n=n/i;
            if(p%i!=0) p=p*i;
        }
    }
    return p;
}
int main()
{
    int n;
    cin>>n;
    cout<<minDivPrim(n);
}