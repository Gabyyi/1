#include<iostream>
#include<iomanip>
using namespace std;
int prime (int x)
{
    int d;
    if(x<2) return 0;
    if(x>2 && x%2==0) return 0;
    for(d=3;d*d<=x;d=d+2)
        if(x%d==0) return 0;
    return 1;
}
int main()
{
    int n,x,i,s=0,nr=0;
    cin>>n;
    for(i=1;i<=n;i++)
    {
        cin>>x;
        if(prime(x))
        {
            s=s+x;
            nr++;
        }
    }
    cout<<fixed<<setprecision(3)<<(float)s/nr;
}