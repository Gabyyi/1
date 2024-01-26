#include<iostream>
#include<fstream>
using namespace std;
int main()
{
    ifstream cin("bac.txt");
    //ifstream cin("secventeneuniforme.in");
    //ofstream cout("secventeneuniforme.out");
    int x,y,z,l=0,lmax=-1;
    cin>>x>>y;
    while(cin>>z)
    {
        if(x!=y && x!=z && y!=z) l++;
        else
        {
            if(l>lmax) lmax=l;
            l=0;
        }
        x=y;
        y=z;
    }
    if(l>lmax) lmax=l;
    if(lmax==0) cout<<0;
    else cout<<lmax+2;
}