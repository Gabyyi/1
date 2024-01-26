#include<iostream>
using namespace std;
int Fibo(int n)
{
    int a=1,b=1,c,i=2;
    cin>>n;
    if(n==1 || n==2) return 1;
    do
    {
        c=a+b;
        if(c%2==1) i++;
        if(c%2==1 && i==n) return c;
        a=b;b=c;
    } while (i<n);
}
int main()
{
    int n,c;
    cin>>n;
    Fibo(n);
    cout<<c;
}
