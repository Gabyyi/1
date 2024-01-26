#include<iostream>
using namespace std;
int main()
{
    int n,m,s=0,nr=0,s2=0;
    cin>>n;
    m=n;
    while(m!=0)
    {
        s=s+m%10;
        m/=10;
    }
    s2=s;
    while(s2>9)
    {
        cout<<9;
        s2=s2-9;
        nr++;
    }
    cout<<s2;
    for(int i=1;i<=(s-nr)-1;i++)
        cout<<0;
}