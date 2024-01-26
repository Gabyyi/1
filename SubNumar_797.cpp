#include<iostream>
#include<fstream>
using namespace std;
int main()
{
    ifstream cin("subnumar.in");
    ofstream cout("subnumar.out");
    int n,v[100],max=-1;
    while(cin>>n)
    {
        while(n>10)
        {
            v[n%100]++;
            n/=10;
        }
    }
    for(int i=99;i>=10;i--)
        if(v[i]>max) max=v[i];
    for(int i=99;i>=10;i--)
        if(v[i]==max) cout<<i<<" ";
}