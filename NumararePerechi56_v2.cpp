#include <iostream>
using namespace std;
int uc(int x)
{
    if(x<0) x=-x;
    return x%10;
}
int main()
{
    int x,a,C=0;
    cin>>a;
    if(a!=0)
    {
        cin>>x;
        while(x!=0)
        {
            if(uc(a)==uc(x)) C++;
            a=x;
            cin>>x;
        }
    }
    cout<<C;
}