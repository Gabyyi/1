#include<iostream>
using namespace std;
long long fact(int n)
{
    long long p=1;
    /*for(int i=1;i<=n;i++)
        p=p*i;
    return p;*/
    while(n!=1)
    {
        p=p*n;
        n--;
    }
    return p;
}
int main()
{
    int n;
    cin>>n;
    cout<<fact(n);
    return 0;
}