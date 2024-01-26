#include<iostream>
#include<fstream>
using namespace std;
int main()
{
    ifstream cin("unice.in");
    ofstream cout("unice.out");
    int v[100],n,i,x;
    cin>>n;
    for(i=1;i<=n;i++)
    {
        cin>>x;
        v[x]++;
    }
    for(i=0;i<=99;i++)
    {
        if(v[i]==1) cout<<i<<" ";
    }
}