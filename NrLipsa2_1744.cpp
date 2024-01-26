#include<iostream>
#include<fstream>
using namespace std;
int main()
{
    ifstream cin("nrlipsa2.in");
    ofstream cout("nrlipsa2.out");
    int n,v[101]={0},u[101]={0},ok=0;
    while(cin>>n)
    {
        if(n>=-100 && n<0) v[n*(-1)]=1;
        else if(n>=0 && n<=100) u[n]=1;
    }
    for(int i=100;i>=1;i--)
        if(v[i]==0) {cout<<i*(-1);ok=1;break;}
    if(ok==0)
    {
        for(int i=0;i<=100;i++)
            if(u[i]==0) {cout<<i;ok=1;break;}
    }
    if(ok==0) cout<<"nu exista";
}
