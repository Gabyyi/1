#include<iostream>
using namespace std;
int main()
{
    int n,m,f=3,ok1=0,ok2=0,ok=1;
    cin>>n>>m;
    while(n%2==0)
    {
        n/=2;
        ok1=1;
    }
    while(m%2==0)
    {
        m/=2;
        ok2=1;
    }
    if(ok1!=ok2) cout<<"NU";
    else
    {
        while(n!=1 && m!=1 && ok!=0)
        {
            ok1=0;ok2=0;
            while(n%f==0)
            {
                ok1=1;
                n/=f;
            }
            while(m%f==0)
            {
                ok2=1;
                m/=f;
            }
            if(ok1!=ok2) ok=0;
            f=f+2;
        }
        if(ok==0) cout<<"NU";
        else
        {
            if((n!=1 && m==1) || (n==1 && m!=1)) cout<<"NU";
            else if(n==m) cout<<"DA";
        }
    }
}