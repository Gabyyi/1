#include<iostream>
#include<fstream>
using namespace std;
int main()
{
    //112 12 5 25 88 15 2 19 32 179 35 621  ->  9 11

    ifstream cin("bac.txt");
    int n,v[101],k=0,l=0,lmax=0,m,a=0,poz[101],lung[101];
    while(cin>>n)
    {
        k++;
        v[k]=n%10;
    }
    for(int i=1;i<=k;i++)
    {
        if(v[i]>=0)
        {
            m=0;l=1;
            for(int j=i+1;j<=k;j++)
            {
                if(v[j]>=0)
                    if(v[i]==v[j])
                    {
                        l++;
                        m=j;
                        v[j]=-1;
                    }
            }
            if(l>=lmax)
            {
                lmax=l;
                a++;
                poz[a]=m;
                lung[a]=l;
            }
            v[i]=-1;
        }
    }
    for(int i=1;i<=a;i++)
        if(lung[i]==lmax) cout<<poz[i]<<" ";
}