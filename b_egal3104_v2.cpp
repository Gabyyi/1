#include<iostream>
using namespace std;
int Egal(int n)
{
    int c,v;
    while(n!=0)
    {
        c=n%10;
        if(c%2==1)
        {
            v=c;
            break;
        }
        n/=10;
    }
    while(n!=0)
    {
        c=n%10;
        if(c%2==1 && c!=v) return 0;
        n/=10;
    }
    return 1;
}
int main()
{
    int n;
    cin>>n;
    cout<<Egal(n);
}