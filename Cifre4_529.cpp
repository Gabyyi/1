#include<iostream>
using namespace std;
struct
{
    int cif,nr;
}x[10];
int main()
{
    int n,y,v[10]={0};
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        cin>>y;
        if(y==0) v[0]++;
        while(y!=0)
        {
            v[y%10]++;
            y/=10;
        }
    }
    int k=0;
    for(int c=0;c<=9;c++)
        if(v[c]>0)
        {
            k++;
            x[k].cif=c;
            x[k].nr=v[c];
        }
    for(int i=0;i<k;i++)
        for(int j=i+1;j<=k;j++)
        {
            if(x[i].nr>x[j].nr) swap(x[i],x[j]);
            else if(x[i].nr==x[j].nr)
                if(x[i].cif>x[j].cif) swap(x[i],x[j]);
        }
    for(int i=1;i<=k;i++)
        cout<<x[i].cif<<" ";
}