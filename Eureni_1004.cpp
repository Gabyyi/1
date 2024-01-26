#include<iostream>
#include<fstream>
#include<cmath>
using namespace std;
int main()
{
    ifstream cin("eureni.in");
    ofstream cout("eureni.out");
    int n,S,e,v[11],p=0,k=0,s=0,q=0;
    cin>>S>>n>>e;
    for(int i=0;i<=n;i++)
    {
        p=pow(e,i);
        v[i]=p;
    }
    for(int i=n;i>=0;i--)
    {
        
        if(v[i]<=S)
        {
            s=0;k=0;
            while(s+v[i]<=S)
            {
                s=s+v[i];
                k++;
            }
            S=S-s;
            q=q+k;
            cout<<v[i]<<" "<<k<<endl;
        }
    }
    cout<<q;
}