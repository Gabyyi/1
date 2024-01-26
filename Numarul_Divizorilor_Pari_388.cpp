#include<iostream>
using namespace std;
int main()
{
    int n,C=0,i;
    cin>>n;
    for(i=1;i*i<n;i++)
        if(n%i==0)
        {
            if(i%2==0) C++;
            if((n/i)%2==0) C++;
        }
    if(i*i==n && i%2==0) C++;
    cout<<C;
}