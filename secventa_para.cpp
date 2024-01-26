#include<iostream>
#include<fstream>
using namespace std;
int main()
{
    //1 2 3 4 6 10 2 8 5 7 9 4 6 10 121 20 4 11 10 2 5 2 6 8 10 16     ->    2

    ifstream cin("bac.txt");
    int n,l=0,lmax=-1,k=0;
    while(cin>>n)
    {
        if(n%2==0) l++;
        else
        {
            if(l>lmax) {lmax=l;k=1;}
            else if(l==lmax) k++;
            l=0;
        }
    }
    if(l>lmax) {k=1;lmax=l;}
    else if(lmax==l) k++;
    cout<<k;
}