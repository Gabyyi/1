#include<iostream>
using namespace std;
int main()
{
    int n,c1,c2,c=0,x=0,p=1;
    cin>>n>>c1>>c2;
    if(n==0) x=c2;
    while(n!=0)
    {
        c=n%10;
        if(c==c1) c=c2;
        x=c*p+x;
        p=p*10;
        n/=10;
    }
    cout<<x;
}