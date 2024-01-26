#include<iostream>
using namespace std;
void citire(int v[],int &n)
{
    cin>>n;
    for(int i=1;i<=n;i++)
        cin>>v[i];
}
bool prim(int x)
{
    if(x<2) return 0;
    if(x>2 && x%2==0) return 0;
    for(int d=3;d*d<=x;d+=2)
        if(x%d==0) return 0;
    return 1;
}
int urmatorul_prim(int x)
{
    x++;
    while(prim(x)!=1)
        x++;
    return x;
}
void inloc(int v[],int n)
{
    for(int i=1;i<=n;i++)
    {
        if(prim(v[i])!=1) v[i]=urmatorul_prim(v[i]);
    }
}
void afisare(int v[],int n)
{
    for(int i=1;i<=n;i++)
        cout<<v[i]<<" ";
}
int main()
{
    int v[1000];
    int n;
    citire(v,n);
    inloc(v,n);
    afisare(v,n);
}