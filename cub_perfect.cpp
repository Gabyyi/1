#include<iostream>
using namespace std;
int cuburi(int n)
{
    return n*n*n;
}
int main()
{
    int n;
    cin>>n;
    for(int i=n;i>=1;i--)
        cout<<cuburi(i)<<" ";
}
