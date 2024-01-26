#include<iostream>
using namespace std;
int main()
{
    int n,v[1001],ok=1;
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        cin>>v[i];
        cout<<v[i];
    }
    for(int i=1;i<=n;i++)
            if(v[i]!=v[n-i+1]) ok=0;
    if(ok==1) cout<<endl<<"DA";
    else cout<<endl<<"NU";
}