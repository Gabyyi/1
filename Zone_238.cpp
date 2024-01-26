#include<iostream>
#include<fstream>
using namespace std;
int main()
{
    //ifstream fin("zone.in");
    //ofstream fout("zone.out");
    int n,v[305],x=0,y=0;
    cin>>n;
    for(int i=1;i<=3*n;i++)
        cin>>v[i];
    for(int i=1;i<=n;i++)
        if(v[i]%2==0) {x=i;break;}
    for(int j=3*n;j>2*n;j--)
        if(v[j]%2!=0) {y=j;break;}
    if(x!=0 && y!=0) swap(v[x],v[y]);
    /*for(int i=1;i<=n;i++)
    {
        if(v[i]%2==0)
        {
            for(int j=3*n;j>2*n;j--)
                if(v[j]%2!=0) {swap(v[i],v[j]);break;}
        }
    }*/
    for(int i=1;i<=3*n;i++)
        cout<<v[i]<<" ";
}