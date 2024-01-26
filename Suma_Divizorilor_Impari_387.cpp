#include<iostream>
using namespace std;
int main()
{
    int n,S=0,i;
    cin>>n;
    for(i=1;i*i<n;i++)
        if(n%i==0)
        {
            if(i%2==1) S=S+i;
            if((n/i)%2==1) S=S+n/i;
        }
    if(i*i==n && i%2==1) S=S+i;
    cout<<S;
}