#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
    int n,i,S=0,nr=0;
    cin>>n;
    for(i=1;i*i<n;i++)
        if(n%i==0) {S=S+i+n/i;nr=nr+2;}
    if(i*i==n) {S=S+i;nr++;}
    cout<<fixed<<setprecision(2)<<S*1.0/nr;
}