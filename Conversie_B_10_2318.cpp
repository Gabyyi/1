#include<iostream>
#include<cmath>
#include<fstream>
using namespace std;
int nrcifre(int x)
{
    int nr=0;
    while(x!=0)
    {
        x/=10;
        nr++;
    }
    return nr;
}
int main()
{
    //ifstream fin("conversie_b_10.in");
    //ofstream fout("conversie_b_10.out");
    int n,b,nb=0,nr=0,p=0;
    cin>>n>>b;//fin>>n>>b;
    nr=nrcifre(n);
    while(n!=0)
    {
        nb=nb+(n%10)*pow(b,nr-(nr-p));
        p++;
        n/=10;
    }
    cout<<nb;//fout<<nb;
}