#include<iostream>
using namespace std;
int divizori(int x)
{
    int d,nr=0;
    for(d=1;d*d<x;d++)
        if(x%d==0) nr=nr+2;
    if(d*d==x) nr++;
    if(nr%2!=0) return 1;
    return 0;
}
int main()
{
    int x,y,nr=0;
    cin>>x>>y;
    if(divizori(x)) nr++;
    while(x%2!=0 || y%2!=0)
    {
        if(divizori(y)) nr++;
        x=y;
        cin>>y;
    }
    if(divizori(y)) nr++;
    cout<<nr;
}