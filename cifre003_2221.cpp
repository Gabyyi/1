#include<iostream>
using namespace std;
int main()
{
    int n,nr=0,r=0;
    cin>>n;
    r=n%3;
    while(n!=0)
    {
        if(n%10%3==r) nr++;
        n/=10;
    }
    cout<<nr;
}