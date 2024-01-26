#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    int n,m,a,b,X,p=0,nr=0;
    cin>>n;
    m=n;
    while(m!=0)
    {
        nr++;
        m/=10;
    }
    p=pow(10,nr/2);
    a=n%p;
    b=n/p;
    if(nr%2!=0) b/=10;
    X=abs(a-b);
    cout<<X;
}
