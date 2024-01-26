#include<iostream>
using namespace std;
int main()
{
    int n,a,b,c=0;
    cin>>n;
    a=1;
    b=1;
    cout<<a<<" "<<b<<" ";
    while((a+b)<=n)
    {
        c=a+b;
        cout<<c<<' ';
        a=b;
        b=c;
    }
}