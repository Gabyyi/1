#include<iostream>
#include<string.h>
using namespace std;
int elim(int n,int c)
{
    if(n==0) return 0;
    if(n%10==c) return elim(n/10,c);
    return elim(n/10,c)*10+n%10;
}
int main()
{
    int n,c;
    cin>>n>>c;
    cout<<elim(n,c);
    
}