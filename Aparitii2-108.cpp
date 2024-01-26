#include<iostream>
using namespace std;
int primac(int n)
{
    int pc;
    pc=n;
    while(pc>9)
        pc=pc/10;
    return pc;
}
int main()
{
    int n,nr=0,pc;
    cin>>n;
    pc=primac(n);
    while(n!=0)
    {
        if(pc==n%10) nr++;
        n/=10;
    }
    cout<<nr;
}