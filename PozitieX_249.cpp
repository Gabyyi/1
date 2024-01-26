#include<iostream>
#include<fstream>
using namespace std;
int main()
{
    //ifstream fin("pozitiex.in");
    //ofstream fout("pozitiex.out");
    int n,X,x,poz=1,ok=0;
    cin>>X>>n;//fin>>X>>n;
    for(int i=1;i<=n;i++)
    {
        cin>>x;//fin>>x;
        if(x==X) ok=1;
        if(x<X) poz++;
    }
    if(ok==0) cout<<"NU EXISTA";//fout<<"NU EXISTA";
    else cout<<poz;//fout<<poz;
}