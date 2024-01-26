#include<iostream>
using namespace std;
int main()
{
    int n,x,ok=1,min=-10000;
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        cin>>x;
        if(x%2==0)
        {
            if(min<=x) min=x;
            else {ok=0;break;}
        }
    }
    if(ok==1) cout<<"DA";
    else cout<<"NU";
}