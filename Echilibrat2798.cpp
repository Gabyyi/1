#include<iostream>
using namespace std;
int echilibrat(int n)
{
    int m,c=0,par=0,imp=0;
    m=n;
    while(m!=0)
    {
        c=m%10;
        par=par+c;
        m=m/100;
    }
    while(n!=0)
    {
        n=n/10;
        c=n%10;
        imp=imp+c;
        n=n/10;
    }
    if(par%2==0 && imp%2==1) return 1;
    else return 0;
}
int main()
{
    int n;
    cin>>n;
    cout<<echilibrat(n);
}