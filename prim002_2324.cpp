#include <iostream>
using namespace std;
int main()
{
    long long n,e,f,ultim;
    cin>>n;
    e=0;
    while(n%2==0)
    {
        n/=2;
        e++;
    }
    if(e>0) ultim=2;
    f=3;
    while(f*f<=n)
    {
        e=0;
        while(n%f==0)
        {
            n=n/f;
            e++;
        }
        if(e>0) ultim=f;
        f=f+2;
    }
    if(n!=1) ultim=n;
    cout<<ultim;
}