#include<iostream>
using namespace std;
int prim(int x)
{
    if(x<2) return 0;
    if(x>2 && x%2==0) return 0;
    for(int d=3;d*d<=x;d=d+2)
        if(x%d==0) return 0;
    return 1;
}
int main()
{
    int n,v[1001];
    cin>>n;
    for(int i=1;i<=n;i++)
        cin>>v[i];
    for(int i=1;i<=n;i++)
        if(!prim(v[i]))
            cout<<v[i]<<" ";
}