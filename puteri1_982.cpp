#include<iostream>
#include<cmath>
using namespace std;
int sumaputeri(int x,int k)
{
    if(k==2) return 1;
    while(x!=0)
    {
        r=n%k;
        if(r>1) return 0;
        n=n/k;
    }
    return 1;
}
int main()
{
    int n,k,x,y,z,q=0,p=0,nr=0;
    cin>>n>>k;
    for(int i=1;i<=n;i++)
    {
        cin>>x;
        if((x-1)%k==0)
        {
            y=x-1;
            q=0;p=-1;
            while(y%k==0)
            {
                z=y;
                while(z%k==0) {p++;z/=k;}
                if(q!=p)
                {
                    y=y-pow(k,p);
                    q=p;
                    p=0;
                }
            }
            if(y==0) nr++;
        }
        else if(x%k==0)
        {
            y=x;
            q=0;
            p=0;
            while(y%k==0) {p++;y/=k;}
            if(p!=q)
            {
                x=x-pow(k,p);
                q=p;
                p=0;
            }
            if(x==0) nr++;
        }
    }
    cout<<nr;
}