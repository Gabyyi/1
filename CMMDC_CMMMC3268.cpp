#include<iostream>
using namespace std;
long long cmmdc(long long a, long long b)
{
    long long r;
    while(b!=0)
    {
        r=a%b;
        a=b;
        b=r;
    }
    return a;
}
long long cmmmc(long long a, long long b)
{
    long long s;
    s=a*b/cmmdc(a,b);
    return s;
}
int main()
{
    long long a,b;
    cin>>a>>b;
    cout<<cmmdc(a,b)<<" "<<cmmmc(a,b); 
}