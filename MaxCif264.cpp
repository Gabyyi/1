#include<iostream>
using namespace std;
int main()
{
    int n,nrmaxap=-1,i,v[10]={0};
    while(cin>>n)
        v[n]++;
    for(i=0;i<=9;i++)
    {
        if(nrmaxap<v[i])
        nrmaxap=v[i];
    }
    for(i=0;i<=9;i++)
        if(v[i]==nrmaxap) cout<<i<<" ";
}