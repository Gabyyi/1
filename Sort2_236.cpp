#include<iostream>
#include<fstream>
using namespace std;
int main()
{
    ifstream cin("sort2.in");
    ofstream cout("sort2.out");
    //86 18 7210 73 15 5 7989 825 562 732 5 911
    int n,k=0,v[101];
    while(cin>>n)
    {
        if(n<100)
        {
            k++;
            v[k]=n;
        }
    }
    if(k==0) cout<<"NU EXISTA";
    else
    {
        for(int i=1;i<k;i++)
            for(int j=i+1;j<=k;j++)
                if(v[i]>v[j]) swap(v[i],v[j]);
        for(int i=1;i<=k;i++)
            cout<<v[i]<<" ";
    }
}