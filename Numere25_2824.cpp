#include<iostream>
#include<fstream>
using namespace std;
int  main()
{
    ifstream cin("numere25.in");
    ofstream cout("numere25.out");
    int n,x,i=1,ok=0;
    cin>>n;
    cin>>x;
    for(i=1;i<x;i++)
        {cout<<i<<' ';ok=1;}
    while(cin>>x)
    {
        for(int j=i+1;j<x;j++)
            {cout<<j<<' ';ok=1;}
        i=x;
    }
    for(int j=i+1;j<=n;j++)
        {cout<<j<<' ';ok=1;}
    if(ok==0) cout<<"Nu exista";
}