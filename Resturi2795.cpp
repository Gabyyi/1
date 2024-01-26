#include<iostream>
using namespace std;
int resturi(int n,int x,int y,int r)
{
    int i,nr=0;
    for(i=1;i<=n;i++)
    {
        if(i%x==r && i%y==r) nr++;
    }
    return nr;
}
int main()
{
    int n,x,y,r,nr;
    cin>>n>>x>>y>>r;
    resturi(n,x,y,r);
    cout<<nr;
}