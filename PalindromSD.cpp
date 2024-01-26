#include<iostream>
using namespace std;
int rasturnat(int x)
{
    int c,s;
    while(x!=0)
    {
            c=x%10;
            s=s*10+c;
            x=x/10;
    }
    return s;
}
int main()
{
    int n,x,v[n],i;
    n=0;
    cout<<"x=";cin>>x;
    while(x!=0)
    {
        if(x==rasturnat(x))
        {
            n++;
            v[n]=x;
        }
        cout<<"x=";cin>>x;
    }
    if(n==0) cout<<-1;
    else
    {
        for(i=1;i<=n/2;i++)
            cout<<v[i]<<" "<<v[n+1-i]<<" ";
        if(n%2==1) cout<<v[(n+1)/2];
    }
    return 0;
}