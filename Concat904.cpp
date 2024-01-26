#include<iostream>
#include<cmath>
using namespace std;
int concat(int a, int b)
{
    int p=0,n=0,nr=0,s=0;
    n=b;
    while(n!=0)
    {
        //nr=nr*10;
        nr++;
        n/=10;
    }
    p=pow(10,nr);
    s=a*p+b;
    return s;
}
int main()
{
    int a,b;
    cin>>a>>b;
    cout<<concat(a,b);
}