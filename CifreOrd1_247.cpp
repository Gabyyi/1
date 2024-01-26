#include<iostream>
#include<fstream>
using namespace std;
int main()
{
    ifstream cin("cifreord1.in");
    ofstream cout("cifreord1.out");
    int n,v[10],c=0,nr=0;
    while(cin>>n)
    {
        if(n==0) v[0]++;
        else
        while(n!=0)
        {
            c=n%10;
            v[c]++;
            n/=10;
        }
    }
    for(int i=9;i>=0;i--)
        while(v[i]!=0)
        {
            nr++;
            cout<<i<<" ";
            if(nr==20) {cout<<endl;nr=0;}
            v[i]--;
        }
}
