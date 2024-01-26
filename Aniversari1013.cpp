#include<iostream>
using namespace std;
struct data_nasterii
{
    int a,l,z;
}v[1001];
int main()
{
    int n,i,p=0,q=0,j;
    cin>>n;
    for(i=1;i<=n;i++)
        cin>>v[i].a>>v[i].l>>v[i].z;
    data_nasterii max;
    max=v[1];
    p=1;
    for(i=2;i<=n;i++)
        if(v[i].a>max.a || (v[i].a==max.a && v[i].l>max.l) || (v[i].a==max.a && v[i].l==max.l && v[i].z>max.z))
        {
            max=v[i];
            p=i;
        }
    cout<<p<<" ";
    for(i=1;i<=n;i++)
        for(j=i+1;j<n;j++)
            if(v[i].a<v[j].a || (v[i].a==v[j].a && v[i].l<v[j].l) || (v[i].a==v[j].a && v[i].l==v[j].l && v[i].z<v[j].z))
            {
                v[j]=v[i];
                q=i;
            }
    cout<<q;
}