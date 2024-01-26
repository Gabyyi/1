#include<iostream>
using namespace std;
int Egal(int n)
{
    int c,u;
    u=-1;
    while(n!=0)
    {
        c=n%10;
        if(c%2!=0)
        {
            if(u==-1) u=c;
            else if(u!=c) return 0;
        }
        n=n/10;
    }
    return 1;
}
int main()
{
    int n,i,ok,c;
    cin>>n;    
    cout<<Egal(n);
}