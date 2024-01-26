#include<iostream>
using namespace std;
void sub(int &a, int &b)
{
    int c;
    c=a%10;
    a/=10;
    b=b*10+c;
}
int main()
{
    int n,m=0,p;
    cin>>n;
    p=n;
    while(p!=0)
    {
        sub(p,m);
    }
    if(n==m) cout<<"DA";
    else cout<<"NU";
}