#include<iostream>
#include<fstream>
using namespace std;
int main()
{
    //ifstream cin("paresort.in");
    //ofstream cout("paresort.out");
    int n,m=0,v[1001],k=1,x;
    cin>>n;
    while(k<=n)
    {
        cin>>x;
        k++;
        if(x%2==0)
        {
            m++;
            v[m]=x;
        }
    }
    if(m==0) cout<<"nu exista";
    else
    {
        for(int i=1;i<m;i++)
            for(int j=i+1;j<=m;j++)
                if(v[i]>v[j]) swap(v[i],v[j]);
        cout<<m<<endl;
        for(int i=1;i<=m;i++)
            cout<<v[i]<<" ";
    }
}