#include<iostream>
#include<fstream>
using namespace std;
int main()
{
    //7 3 200 100 10 9 6 100 1000 40 1002 20 30    ->   3 2

    ifstream cin("bac.txt");
    int n,l=0,lmax=-1,k=0;
    while(cin>>n)
    {
        if(n%10==0) l++;
        else
        {
            if(l>lmax) {lmax=l;k=1;}
            else if(l==lmax) k++;
            l=0;
        }
    }
    if(l>lmax) {k=1;lmax=l;}
    else if(lmax==l) k++;
    cout<<lmax<<" "<<k;
}