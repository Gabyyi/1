#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    int n,k,p,x=0;
    bool ok=0;
    cin>>n;
    n=n-1;
    p=0;
    while(n%2==0)
    {
        n/=2;
        p++;
    }
    x=pow(2,p);
    k=n;
    if(k%2!=0 && k<x) ok=1;
    if(ok==1) cout<<"DA";
    if(ok==0) cout<<"NU";
}