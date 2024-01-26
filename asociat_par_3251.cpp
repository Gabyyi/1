#include<iostream>
using namespace std;
int rasturnat(int x)
{
    int y=0;
    while(x!=0)
    {
        y=y*10+x%10;
        x/=10;
    }
    return y;
}

int main()
{
    int n,x,y,p,c=0,z=0,ok;
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        cin>>x;
        y=0;ok=0;p=1;
        if(x==0) c++;
        while(x!=0)
        {
            if(x%10%2==0) 
            {
                y=(x%10)*p+y;
                p*=10;
                ok=1;
            }
            x/=10;
        }
        if(ok==1)
        {
            z=rasturnat(y);
        	if(y==z) c++;
        }
    }
    cout<<c;
}