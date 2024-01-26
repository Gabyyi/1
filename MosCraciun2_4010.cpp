#include<iostream>
using namespace std;
int main()
{
    int n,m,p[101],c[101],k=0,S=0;
    cin>>n>>m;
    for(int i=1;i<=m;i++)
        cin>>p[i]>>c[i];
    for(int i=1;i<m;i++)
        for(int j=i+1;j<=m;j++)
            if(p[i]>p[j]) {swap(p[i],p[j]);swap(c[i],c[j]);}
    for(int i=1;i<=m;i++)
    {
        while(c[i]!=0)
        {
            if(k<n)
            {
                S=S+p[i];
                k++;
                c[i]--;
            }
            else break;
        }
    }
    if(k!=n) cout<<"imposibil";
    else cout<<S;
}