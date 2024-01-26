#include<iostream>
using namespace std;
int nr_cif_zero(int n)
{
    int nr=0;
    if(n==0) return 1;
    while(n!=0)
    {
        if(n%10==0) nr++;
        n/=10;
    }
    return nr;
}
int main()
{
    int n;
    cin>>n;
    cout<<nr_cif_zero(n);
}