#include<iostream>
#include<fstream>
using namespace std;
int main()
{
    //7 7 1 3 7 7 5 3 3 3 7 8 9

    ifstream cin("bac.txt");
    int a,b,l=0,lmax=-1;
    cin>>a;
    while(cin>>b)
    {
        if(a!=b) l++;
        else
        {
            if(l>lmax) lmax=l;
            l=0;
        }
        a=b;
    }
    if(l>lmax) lmax=l;
    cout<<lmax+1;
}