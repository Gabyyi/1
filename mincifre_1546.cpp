#include<iostream>
#include<fstream>
#include<cstring>
using namespace std;
int main()
{
    ifstream cin("mincifre.in");
    ofstream cout("mincifre.out");
    char n[10001];
    int v[10]={0},ok=0;
    cin>>n;
    for(int i=0;i<strlen(n);i++)
    {
        char c=n[i];
        int x=(int)c-48;
        v[x]++;
    }
    for(int i=1;i<=9;i++)
    {
        if(v[0]>0)
        {
            if(v[i]>0)
            {
                cout<<i;
                v[i]--;
                ok=1;
            }
            if(ok==1)
            {
                while(v[0]!=0)
                {
                    cout<<0;
                    v[0]--;
                }
            }
        }
        while(v[i]!=0)
        {
            cout<<i;
            v[i]--;
        }
    }

    /*for(int i=1;i<=9;i++)
        if(v[i]>0)
        {
            cout<<i;
            v[i]--;
            break;
        }
    for(int i=0;i<=9;i++)
        for(int j=1;j<=v[i];j++) cout<<i;*/
}