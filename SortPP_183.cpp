#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    int n,v[1001],min=50001,p=0,r=0;
    cin>>n;
    for(int i=1;i<=n;i++)
        cin>>v[i];
    for(int i=1;i<=n;i++)
    {
        r=sqrt(v[i]);
        if(r*r==v[i])
        {
            p=0;min=50001;
            for(int j=i;j<=n;j++)
            {
                r=sqrt(v[j]);
                if(r*r==v[j])
                    if(v[j]<min) {min=v[j];p=j;}
            }
            swap(v[i],v[p]);
        }
    }
    for(int i=1;i<=n;i++)
        cout<<v[i]<<" ";
}