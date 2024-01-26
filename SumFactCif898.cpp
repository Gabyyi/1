#include<iostream>
using namespace std;
long long fact(int n)
{
    long long p=1;
    for(int i=1;i<=n;i++)
        p=p*i;
    return p;
}
long long sumfactcif(int n)
{
    int c=0;
    long long s=0;
    if(n==0) return 1;
    while(n!=0)
    {
        c=n%10;
        s=s+fact(c);
        n/=10;
    }
    return s;
}
/*long long sumfactcif(long long n)
{
    int s=0;
    while(n!=0)
    {
        int c=0,p=1;
        c=n%10;
        for(int i=1;i<=c;i++)
            p=p*i;
        s=s+p;
        n/=10;
    }
    return s;
}*/
int main()
{
    int n;
    cin>>n;
    cout<<sumfactcif(n);
    return 0;
}