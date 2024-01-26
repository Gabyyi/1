#include<iostream>
using namespace std;
int main()
{
    int n,f=2,e,p=1;
    cin>>n;
    while(n!=1)
    {
        e=0;
        while(n%f==0)
        {
            n=n/f;
            e++;
        }
        if(e!=0) p=p*f;
        f++;
        if(f*f>n)
        {
            p=p*n;
            n=1;
        }
    }
    cout<<p;
}