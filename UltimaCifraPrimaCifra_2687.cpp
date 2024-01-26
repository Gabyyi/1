#include<iostream>
using namespace std;
int main()
{
    int n,x,y,u=0,p=0;
    cin>>n;
    cin>>x;
    u=x%10;
    for(int i=2;i<=n;i++)
    {
        cin>>y;
        p=y;
        while(p>9)
            p/=10;
        if(u==p) cout<<x<<" "<<y<<endl;
        x=y;
        u=x%10;
    }
}