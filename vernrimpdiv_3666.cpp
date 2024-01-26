#include<iostream>
using namespace std;
int main()
{
    int n,i,nr=0;
    cin>>n;
    for(i=1;i*i<n;i++)
        if(n%i==0) nr=nr+2;
    if(i*i==n) nr++;
    if(nr%2!=0) cout<<"da";
    else cout<<"nu";
}