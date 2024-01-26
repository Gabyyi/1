#include<iostream>
using namespace std;
int main()
{
    int n,x=-1,y=-1,a;
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        cin>>a;
        if(a>x)
        {
            y=x;
            x=a;
        }
        else if(a>y) y=a;
    }
    cout<<x<<" "<<y;
}