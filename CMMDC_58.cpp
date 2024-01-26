#include <iostream>
using namespace std;
int cmmdc(int a,int b)
{
    int r;
    while(b!=0)
    {
        r=a%b;
        a=b;
        b=r;
    }
    return a;
}
int main()
{
    int a,b;
    cin>>a>>b;
    if(a==0 && b==0) cout<<-1;
    else cout<<cmmdc(a,b);
}