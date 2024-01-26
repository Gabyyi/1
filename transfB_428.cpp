#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    int b,n,x,S=0,p=1;
    cin>>b>>n;
    for(int i=1;i<=n;i++)
    {
        cin>>x;
        S=S+x*pow(b,n-i);
    }
    cout<<S;
}