#include<iostream>
#include<fstream>
using namespace std;
int main()
{
    //12 25 -6 7 80 -75 101 -6 52 -124 87 99 210   ->   11

    ifstream cin("bac.txt");
    int n,p=0,u=0,k=0;
    while(cin>>n)
    {
        p++;
        if(n<0) break;
    }
    k=p;
    while(cin>>n)
    {
        k++;
        if(n<0) u=k;
    }
    if((k-p+1)>u) cout<<k-p+1;
    else cout<<u;
}