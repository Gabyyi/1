#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    int n,v[51],r=0;
    cin>>n;
    for(int i=1;i<=n;i++)
        cin>>v[i];
    for(int i=1;i<=n;i++)
    {
        r=sqrt(v[i]);
        if(r*r==v[i])
        {
            n++;
            for(int j=n;j>i;j--)
                v[j]=v[j-1];
            v[i]=r;
            i++;
        }
    }
    for(int i=1;i<=n;i++)
        cout<<v[i]<<" ";
}
