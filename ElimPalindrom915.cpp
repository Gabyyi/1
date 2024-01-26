#include<iostream>
using namespace std;
void citire(int v[],int &n)
{
    cin>>n;
    for(int i=1;i<=n;i++)
        cin>>v[i];
}
int palindrom(int x)
{
    int y,s=0;
    y=x;
    while(y!=0)
    {
        s=s*10+y%10;
        y/=10;
    }
    if(x==s) return 1;
    else return 0;
}
void eliminare(int v[],int n,int k)
{
    for(int j=k;j<=n-1;j++)
        v[j]=v[j+1];
    n--;
}
void afisare(int v[], int n)
{
    for(int i=1;i<=n;i++)
        cout<<v[i]<<" ";
}
int main()
{
    int n,v[1001],k;
    citire(v,n);
    for(int i=1;i<=n;i++)
    {
        if(palindrom(v[i]))
        {
            eliminare(v,n,i);
            i--;
            n--;
        }
    }
    afisare(v,n);
}