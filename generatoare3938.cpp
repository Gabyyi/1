#include<iostream>
using namespace std;
void generatoare(int n)
{
    int a,b,nr=0;
    for(a=2;a<=n/2;a+=2)
        for(b=n/a;b>=1;b--)
            if(a*b+a/b==n)
            {
                cout<<a<<"-"<<b<<" ";
                nr++;
                break;
            }
    if(nr==0) cout<<"nu exista";
}
int main()
{
    int n;
    cin>>n;
    generatoare(n);
}