#include<iostream>
#include<fstream>
using namespace std;
int main()
{
    //5
    //2 10 5 20 21 0 10 60 15 3 9 20 20 5 25    ->  4 2

    ifstream cin("bac.txt");
    int k,n,l=0,lmax=-1,nr=0;
    cin>>k;
    while(cin>>n)
    {
        if(n%k==0) l++;
        else
        {
            if(l>lmax) {lmax=l;nr=1;}
            else if(l==lmax) nr++;
            l=0;
        }
    }
    if(l>lmax) {nr=1;lmax=l;}
    else if(lmax==l) nr++;
    cout<<lmax<<" "<<nr;
}