#include<iostream>
using namespace std;
int prim(int x)
{
    int d;
    if(x<2) return 0;
    if(x>2 && x%2==0) return 0;
    for(d=3;d*d<=x;d=d+2)
        if(x%d==0) return 0;
    return 1;
}
int interval(int n)
{
    int i,x=0/*,div*/;
    i=1;  
    while(x<=1000002)
    {
        x=n+i;
        /*div=0;
        for(int d=1;d<=x;d++)
            if(x%d==0) div++;
        if(div==2)
        {
            x=x+1;
            break;
        }*/
        if(prim(x))
        {
            x=x+1;
            break;
        }
        else i++;
    }
    return x;
}
int main()
{
    int n,x;
    cin>>n;
    interval(x);
    cout<<x;
}