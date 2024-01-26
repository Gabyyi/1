#include<iostream>
using namespace std;
int cmmdc(int a,int b)
{
    int r;
    while(b!=0)
    {
        r=a%b;
        a=b;
        b=r;
    }
    return a;
}
int cmmmc(int a,int b)
{
    return a*b/cmmdc(a,b);
}
int main()
{
    int a,b,c,d;
    cin>>a>>b>>c>>d;
    cout<<cmmdc(a,b)+cmmmc(c,d);
    return 0;
}