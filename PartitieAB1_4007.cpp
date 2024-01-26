#include<iostream>
using namespace std;
int main()
{
    int n,a,b,x=0,y=0;
    cin>>n>>a>>b;
    while(n%b!=0)
    {
        x++;
        n=n-a;
    }
    y=n/b;
    for(int i=1;i<=x;i++)
        cout<<a<<" ";
    for(int i=1;i<=y;i++)
        cout<<b<<" ";
}