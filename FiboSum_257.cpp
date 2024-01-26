#include<iostream>
using namespace std;
int fibo(int x)
{
    int a,b,c=0;
    if(x==1) return 1;
    a=1;
    b=1;
    while((a+b)<=x)
    {
        c=a+b;
        a=b;
        b=c;
    }
    return c;
}
int main()
{
    int n;
    cin>>n;
    while(n!=0)
    {
        cout<<fibo(n)<<" ";
        n=n-fibo(n);
    }
}