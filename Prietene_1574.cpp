#include<iostream>
using namespace std;
int main()
{
    int a,b,s1=1,s2=1,i;
    cin>>a>>b;
    for(i=2;i*i<a;i++)
        if(a%i==0) s1=s1+i+a/i;
    if(i*i==a) s1=s1+i;
    for(i=2;i*i<b;i++)
        if(b%i==0) s2=s2+i+b/i;
    if(i*i==b) s2=s2+i;
    if(s1==b && s2==a) cout<<"PRIETENE";
    else cout<<"NU SUNT PRIETENE";
}