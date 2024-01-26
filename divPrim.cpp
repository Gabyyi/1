#include<iostream>
using namespace std;
void divPrim(int n,int &s)
{
    int e,f;
    e=0;
    while(n%2==0)
    {
        n/=2;
        e++;
    }
    if(e%2!=0) s=2;
    f=3;
    while(f*f<=n)
    {
        e=0;
        while(n%f==0)
        {
            n=n/f;
            e++;
        }
        if(e%2!=0) s=s+f;
        f=f+2;
    }
    if(n!=1) s=s+n;
    return ;
}
int main()
{
    int s=0,n;
    cin>>n;
    divPrim(n,s);
    cout<<s;
}