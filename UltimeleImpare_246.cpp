#include<iostream>
using namespace std;
int main()
{
    int n,x,a=0,b=0,k=0;
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        cin>>x;
        if(x%2!=0) {k++;b=a;a=x;}
    }
    if(k<2) cout<<"Numere insuficiente";
    else cout<<b<<' '<<a;
}