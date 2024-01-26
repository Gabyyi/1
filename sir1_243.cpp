#include<iostream>
using namespace std;
int sir(int x)
{
    int nr=0,y=0,j=1;
    y=x;
    while(j<=y)
    {
        for(int i=j;i>=1;i--)
        {
            nr++;
            if(nr==x) return i;
        }
        j++;
    }
    return 1;
}
int main()
{
    int n;
    cin>>n;
    cout<<sir(n);
}