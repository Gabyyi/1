#include<iostream>
using namespace std;
double nreal(int x,int y)
{
    int n;
    double p=1,s=0;
    n=y;
    while(n!=0)
    {
        p=p/10;
        n/=10;
    }
    return s=x+y*p;
}
int main()
{
    int x,y;
    cin>>x>>y;
    cout<<nreal(x,y);
}