#include<iostream>
#include<cmath>
using namespace std;
int nr(float a, float b)
{
    int x=0;
    x=abs((int)a-(int)b)+1;
    return x;
}
int main()
{
    int a,k,p,q,x=0;
    cin>>a>>k;
    p=pow(10,k-1);
    q=pow(10,k)-1;
    for(int i=p;i<=q;i++)
        if(i%a==0) x=x+nr(i,i);
    cout<<x;
}