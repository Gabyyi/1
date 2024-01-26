#include<iostream>
#include<fstream>
using namespace std;
int main()
{
    ifstream cin("intervale5.in");
    ofstream cout("intervale5.out");
    int x,y=-1,v[101],ok=1,gasit=0;
    while(cin>>x)
    {
        v[x]=1;
        if(x>y) y=x;
    }
    for(int i=0;i<=y-2;i++)
        for(int j=i+2;j<=y;j++)
            if(v[i]==1 && v[j]==1)
            {
                ok=1;
                for(int p=i+1;p<j;p++)
                    if(v[p]==1) ok=0;
                if(ok==1) {cout<<i<<" "<<j<<endl;gasit=1;}
            }
    if(gasit==0) cout<<"nu exista";
    
}