#include<iostream>
using namespace std;
int main()
{
    int n,c,p;
    cin>>n;
    p=1;
    while(n!=0)
    {
        c=n%10;
        if(c%2!=0)  p=p*c;
        n/=10;
    }
    cout<<p;
}