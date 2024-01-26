#include<iostream>
using namespace std;
int main()
{
    int n,e,f;
    cin>>n;
    e=0;
    while(n%2==0)
    {
        n/=2;
        e++;
    }
    if(e>0) cout<<2<<" "<<e<<'\n';
    f=3;
    while(f*f<=n)
    {
        e=0;
        while(n%f==0)
        {
            n=n/f;
            e++;
        }
        if(e>0) cout<<f<<" "<<e<<'\n';
        f=f+2;
    }
    if(n!=1) cout<<n<<" "<<1;
}