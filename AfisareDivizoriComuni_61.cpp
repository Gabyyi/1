#include<iostream>
using namespace std;
int main()
{
    int a,b,i;
    cin>>a>>b;
    for(i=1;i*i<a*b;i++)
        if(a%i==0 && b%i==0) cout<<i<<' ';
}