#include<iostream>
using namespace std;
int main()
{
    long long n;
    int c,maxim,nr;
    cin>>n;
    nr=0;maxim=-1;
    if(n==0)
    {
        cout<<0;return 0;
    }
    while(n!=0)
    {
        c=n%10;
        if(c%2==0)
        {
            nr++;
            if(c>maxim) maxim=c;
        }
        n/=10;
    }
    if(nr==0) cout<<10;
    else cout<<maxim;
}