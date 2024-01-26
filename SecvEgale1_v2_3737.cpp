#include<iostream>
using namespace std;
int v[1000001];
int main()
{
    long n,x,l=0,lmax=-1,st=0,dr=0;
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        cin>>x;
        if(p[x]==0) p[x]=i;
        else
        {
            l=i-p[x]+1;
            if(l>lmax)
            {
                l=lmax;
                st=p[x];dr=i;
            }
        }
    }
    /*for(int i=1;i<=n;i++)
    {
        l=0;
        for(int j=i;j<=n;j++)
        {
            if(v[i]==v[j]) l=j-i+1;
        }
        if(l>lmax)
        {
            lmax=l;
            st=i;
            dr=st+l-1;
        }
    }*/
    cout<<st<<" "<<dr;
}