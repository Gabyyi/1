#include<iostream>
#include<fstream>
using namespace std;
struct
{
    int ord,t;
}v[1001];

int main()
{
    ifstream cin("proiecte.in");
    ofstream cout("proiecte.out");
    int n;
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        cin>>v[i].t;
        v[i].ord=i;
    }
    for(int i=1;i<n;i++)
        for(int j=i+1;j<=n;j++)
            if(v[i].t>v[j].t) swap(v[i],v[j]);
    for(int i=1;i<=n;i++)
        cout<<v[i].ord<<' ';
}