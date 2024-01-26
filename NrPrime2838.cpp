#include<iostream>
using namespace std;
int NrPrime(int n)
{
    int c=0,nr=0;
    while(n!=0)
    {
        c=n%10;
        int div=0;
        for(int i=1;i<=c;i++)
            if(c%i==0) div++;
        if(div==2) nr++;
        n=n/10;
    }
    return nr;
}
int main()
{
    int n,nr;
    cin>>n;
    NrPrime(n);
    cout<<nr;
}