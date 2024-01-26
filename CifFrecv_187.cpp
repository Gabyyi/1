#include<iostream>
#include<fstream>
using namespace std;
int main()
{
    ifstream cin("ciffrecv.in");
    ofstream cout("ciffrecv.out");
    int n,v[10];
    while(cin>>n)
    {
        v[n]++;
    }
    if(v[7]!=0) cout<<7<<" "<<v[7];
    else if(v[5]!=0) cout<<5<<" "<<v[5];
    else if(v[3]!=0) cout<<3<<" "<<v[3];
    else if(v[2]!=0) cout<<2<<" "<<v[2];
}