#include<iostream>
using namespace std;
int prim(int x)
{
    if(x<2) return 0;
    if(x>2 && x%2==0) return 0;
    for(int d=3;d*d<=x;d++)
        if(x%d==0) return 0;
    return 1;
}
int nr_prim(int n)
{
    int gasit=0,i=1,x;
    x=n;
    while(gasit==0)
    {
        x=n+i;
        if(!prim(x)) 
        {
            i++;gasit=0;
        }
        else gasit=1;    
    }
    return x;
}
int main()
{
    int n,x;
    cin>>n;
    x=nr_prim(n);
    cout<<x;
}