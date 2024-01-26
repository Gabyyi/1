#include<iostream>
using namespace std;
int main()
{
    int n,v[51];
    cin>>n;
    for(int i=1;i<=n;i++)
        cin>>v[i];
    for(int i=1;i<=n;i++)
        if(v[i]%2==0)
        {
            n++;
            for(int j=n;j>i+1;j--)
                v[j]=v[j-1];
            v[i+1]=v[i]*2;
            i++;
        }
    for(int i=1;i<=n;i++)
        cout<<v[i]<<" ";
}