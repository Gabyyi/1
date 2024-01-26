#include<iostream>
using namespace std;
int prim(int x)
{
    int d;
    if(x<2) return 0;
    if(x>2 && x%2==0) return 0;
    for(d=3;d*d<=x;d=d+2)
    {
        if(x%d==0) return 0;
    }
    return 1;
}
int sub(int n, int &a, int &b)
{
    a=-1;b=-1;
    int i;
    for(i=n-1;i>=2;i--)
    {
        if(prim(i))
        if(a==-1) a=i;
        else
        {
            b=i;
            return 0;
        }
    }
}
int main()
{
    int n,a,b;
    cin>>n;
    sub(n,a,b);
    cout<<a<<" "<<b; 
}