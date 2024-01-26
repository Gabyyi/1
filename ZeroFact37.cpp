#include<iostream>
using namespace std;
long long nz(long long n)
{
    long long m=1;
    int nr=0;
    while(n!=0)
    {
        m=m*n;
        n--;
    }
    while(m%10==0)
    {
        nr++;
        m=m/10;
    }
    return nr;
}
int main()
{
    int n;
    cin>>n;
    cout<<nz(n);
}