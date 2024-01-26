#include<iostream>
using namespace std;
int main()
{
    int v[10]={0},x,c,i,nr=0;
    while(cin>>x)
    {
        if(x==0) v[0]++;
        while(x!=0)
        {
            c=x%10;
            v[c]++;
            x/=10;
        }//ctrl-Z
    }
    for(c=9;c>=0;c--)
    for(i=1;i<=v[c];i++)
    {
        cout<<c<<" ";
        nr++;
        if(nr%20==0) cout<<endl;
    }
}