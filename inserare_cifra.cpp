#include<iostream>
using namespace std;
int main()
{
    int x,c,p=1,y;
    cin>>x>>c;
    cout<<x*10+c<<endl;
    y=x;
    while(y!=0)
    {
        p*=10;
        y/=10;
    }
    cout<<c*p+x;
}