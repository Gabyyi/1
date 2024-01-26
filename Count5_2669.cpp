#include<iostream>
using namespace std;
int suma_cif(int x)
{
    int s=0;
    while(x!=0)
    {
        s=s+x%10;
        x/=10;
    }
    return s;
}
int main()
{
    int n,x,v[82]={0},s=0,nr=0;
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        cin>>x;
        s=suma_cif(x);
        v[s]++;
    }
    for(int i=0;i<=81;i++)
        nr=nr+(v[i]*(v[i]-1))/2;
    cout<<nr;
}