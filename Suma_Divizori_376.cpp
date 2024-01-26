#include<iostream>
using namespace std;
int main()
{
    int n,i;
    long long S=0;
    cin>>n;
    for(i=1;i*i<n;i++)
        if(n%i==0) S=S+i+n/i;
    if(i*i==n) S=S+i;
    cout<<S;
}