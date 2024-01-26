#include<iostream>
using namespace std;
int main()
{
    int n,c,p,nr=0;
    cin>>n;
    p=n%10;n/=10;
    nr++;
    while(n!=0)
    {
        c=n%10;
        if(p==c) nr++;
        n/=10;
    }
    cout<<nr;
}