#include<iostream>
using namespace std;
int main()
{
    int n,a,b,p;
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        cin>>a>>b;
        if(a>b) swap(a,b);
        p=1;     //determin cea mai mare putere a lui 2 <=b
        while(p<=b) p=p*2;  //acum, dupa while, p este prima putere a lui 2 care e > b 
        p=p/2;
        if(p>=a) cout<<p<<endl;
        else cout<<0<<endl;
    }
}