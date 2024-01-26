#include<iostream>
#include<fstream>
using namespace std;
int main()
{
    ifstream cin("puteri6.in");
    ofstream cout("puteri6.out");
    int n,v[10],x,k,s=0;
    cin>>n;
    while(cin>>x)
    {
        k=0;
        while(x!=1)
        {
            k++;
            x/=10;
        }
        v[k]++;
    }
    for(k=0;k<=9;k++)
    {
        s=s+v[k];
        if(s>=n) break; 
    }
    if(s<n) cout<<"Nu exista";
    else
    {
        cout<<1;
        for(int i=1;i<=k;i++)
            cout<<0;
    }
}