#include<iostream>
using namespace std;
int nr_cif(int n,int k)
{
    int nr=0,c;
    while(n!=0)
    {
        c=n%10;
        if(c!=0 && k%c==0) nr++;
        n/=10;
    }
    return nr;
}
int main()
{
    int n,k;
    cin>>n>>k;
    cout<<nr_cif(n,k);
}