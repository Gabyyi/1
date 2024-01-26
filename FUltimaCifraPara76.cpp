#include<iostream>
using namespace std;
int UCP(int n)
{
    int c=0,nr=0;
    if(n==0) return 0;
    while(n!=0)
    {
        c=n%10;
        if(c%2==0) return c;
        n/=10;
    }
    return -1;
}   
int main()
{
    int n;
    cin>>n;
    cout<<UCP(n);
    return 0;
}