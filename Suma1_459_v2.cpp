#include<iostream>
using namespace std;
int main()
{
    int n,m=0,s=0;
    cin>>n;
    s=n;
    m=n;
    cin>>n;
    while(m!=n)
    {
        s=s+m;
        m=n;
        cin>>n;
    }
    cout<<s+m;
}