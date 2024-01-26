#include<iostream>
using namespace std;
int prim(int x)
{
    if(x<2) return 0;
    if(x>2 && x%2==0) return 0;
    for(int d=3;d*d<=x;d=d+2)
    {
        if(x%d==0) return 0;
    }
    return 1;
}
int i_prim(int n)
{
    int p1,p2;
    p1=n;p2=n;
    while(prim(p1)==0)
        p1--;
    while(prim(p2)==0)
        p2++;
    return p2-p1;
}
int main()
{
    int n,p1,p2;
    cin>>n;
    cout<<i_prim(n);
}