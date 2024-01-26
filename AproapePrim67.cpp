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
int a_prim(int n)
{
    int a=-1,b;
    if(n<6) return 0;
    if(n%2==0) a=2;
    else
    {
        for(int i=3;i*i<n;i=i+2)
            if(n%i==0) 
            {
                a=i;
                break;
            }
    }
    if(a==-1) return 0;
    b=n/a;
    if(a!=b && prim(b)) return 1;
    return 0;
}
int main()
{
    int n;
    cin>>n;
    cout<<a_prim(n);
}
//pasul1 determin a=primul divizor mai mare decat 1 al lui n => a este nr prim
//pasul2 determin b=n/a => n=a*b
//pasul3 daca b!=a si b este prim => nr n este aproape prim