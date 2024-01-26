#include<iostream>
using namespace std;
bool prim(int x)
{
    if(x<2) return 0;
    else if(x>2 && x%2==0) return 0;
    for(int d=3;d*d<=x;d=d+2)
        if(x%d==0) return 0;
    return 1;
}
int main()
{
    int n,i=2,x=3;
    cin>>n;
    cout<<2<<" ";
    while(i<=n)
    {
        if(prim(x)) {cout<<x<<" ";i++;}
        x=x+2;
    }
}