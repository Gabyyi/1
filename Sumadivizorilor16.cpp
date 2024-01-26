#include<iostream>
using namespace std;
int sum_div(int n)
{
    int i,s=0;
    for(i=1;i*i<n;i++)
        if(n%i==0) s=s+i+n/i;
    if(i*i==n) s=s+i;
    return s;
}
int main()
{
    int n;
    cin>>n;;
    cout<<sum_div(n);
}