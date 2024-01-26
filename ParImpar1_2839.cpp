#include<iostream>
#include<fstream>
using namespace std;
int v[11];
int main()
{
    ifstream cin("parimpar1.in");
    ofstream cout("parimpar1.out");
    int n,x,s=0;
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        cin>>x;
        v[x]++;
    }
    for(int i=1;i<=n;i++)
    {
        cin>>x;
        if(x%2!=0)
        {
            for(int j=0;j<9;j=j+2)
                if(v[j]>0) s=s+x*j*v[j];
        }
        else if(x%2==0)
        {
            for(int j=1;j<=9;j=j+2)
                if(v[j]>0) s=s+x*j*v[j];
        }
    }
    cout<<s;
}