#include <iostream>
using namespace std;
int main()
{
    int x,y,s=0;
    cin>>x>>y;
    s=x;
    while(x!=y)
    {
        s=s+y;
        x=y;
        cin>>y;
    }
    cout<<s+y;
}