#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    long long n,m=0;
    int c=0,p=1,nr=0,x=0;
    cin>>n;
    if(n<=10) return 0;
    m=n;
    while(m!=0)
    {
        c=m%10;
        nr++;
        m/=10;
    }
    x=pow(10,nr-2);
    n=n/x;
    while(n!=0)
    {
        c=n%10;
        p=p*c;
        n/=10;
    }
    cout<<p;
}