#include<iostream>
#include<fstream>
using namespace std;
int main()
{
    ifstream cin("nrlipsa.in");
    ofstream cout("nrlipsa.out");
    int n,v[1001],nr=0;
    while(cin>>n)
    {
        if(n<=999 && n>=100)
            v[n]++;
    }
    for(int i=999;i>=100;i--)
    {
        if(v[i]==0) {cout<<i<<" ";nr++;}
        if(nr==2) break;
    }
    if(nr==0) cout<<"NU";
}