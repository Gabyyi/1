#include <iostream>
using namespace std;
int fact(int n)
{
    int f,e=0,nr=0;
    while(n%2==0)
    {
        n/=2;
        e++;
    }
    if(e!=0) nr++;
    f=3;
    while(f*f<=n)
    {
        e=0;
        while(n%f==0)
        {
            n=n/f;
            e++;
        }
        if(e!=0) nr++;
        f=f+2;
    }
    if(n!=1) nr++;
    return nr;
}
int main()
{
    int n,x,y=0,nrf,nrfmax=0;
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        cin>>x;
        nrf=fact(x);
        if(nrf>nrfmax) 
        {
            y=x;
            nrfmax=nrf;
        }
        else if(nrf==nrfmax) 
            if(y>=x) y=x;
    }
    cout<<y;
}