#include<iostream>
using namespace std;
int fibo(int x)
{
    int a,b,c=0;
    a=1;
    b=1;
    while((a+b)<=x)
    {
        c=a+b;
        a=b;
        b=c;
    }
    if(x==c) return 1;
    return 0;
}
int main()
{
    int n,x;
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        cin>>x;
        if(x==1) cout<<"DA"<<endl;
        else
        {
            if(fibo(x)) cout<<"DA"<<endl;
            else cout<<"NU"<<endl;
        }
    }
}