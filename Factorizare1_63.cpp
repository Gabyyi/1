#include<iostream>
using namespace std;
int main()
{
    long long n,f,fact=0;
    int e=0,emax=0;
    cin>>n;
    while(n%2==0)
    {
        e++;
        n/=2;
    }
    if(e>=emax)
    {
        emax=e;
        fact=2;
    }
    f=3;
    while(f*f<=n)
    {
        e=0;
        while(n%f==0)
        {
            e++;
            n/=f;
        }
        if(e>=emax && f>fact)
        {
            emax=e;
            fact=f;
        }
        f=f+2;
    }
    if(1>=emax)
    {
        emax=1;
        fact=n;
    }
    cout<<fact;
}