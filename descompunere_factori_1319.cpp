#include <iostream>
using namespace std;
int main()
{
    int n,f;
    cin>>n;
    while(n%2==0)
    {
        n=n/2;
        cout<<2<<" ";
    }
    f=3;
    while(f*f<=n)
    {
        while(n%f==0)
        {
            n=n/f;
            cout<<f<<" ";
        }
        f=f+2;
    }
    if(n!=1) cout<<n;
}