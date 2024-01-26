#include<iostream>
#include<fstream>
using namespace std;
int main()
{
    ifstream cin("secventapara.in");
    ofstream cout("secventapara.out");
    int x,l=0,lmax=-1,k=0;
    while(cin>>x)
    {
        if(x%2==0) l++;
        else
        {
            if(l>lmax) {lmax=l;k=1;}
            else if(l==lmax) k++;
            l=0;
        }
    }
    if(l>lmax) k=1;
    else if(l==lmax) k++;
    cout<<k;
}