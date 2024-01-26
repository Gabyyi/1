#include<iostream>
using namespace std;
int main()
{
    long long n,m,f;
    int nr=1,e=0;
    cin>>n;
    m=n;
    while(n%2==0)
    {
        n/=2;
        e++;
    }
    if(e!=0) nr=nr*(m*e+1)%59999;
    f=3;
    while(f*f<=n)
    {
        e=0;
        while(n%f==0)
        {
            n=n/f;
            e++;
        }
        if(e!=0) nr=nr*(m*e+1)%59999;
        f=f+2;
    }
    if(n!=1) nr=nr*(m*1+1)%59999;
    cout<<nr;
}