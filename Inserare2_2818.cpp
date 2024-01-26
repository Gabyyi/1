#include<iostream>
#include<fstream>
using namespace std;
int main()
{
    ifstream cin("inserare2.in");
    ofstream cout("inserare2.out");
    int m,n,x,y,a=0,b=0,poz=0;
    cin>>m>>n;
    cin>>x;
    a=x;
    for(int i=2;i<=m;i++)
        cin>>x;
    b=x;
    cin>>x;
    for(int i=2;i<=n;i++)
    {
        cin>>y;
        if(a>x && y>b) {poz=i;break;}
        x=y;
    }
    if(poz==0) cout<<"imposibil";
    else cout<<poz;
}