#include<iostream>
#include<fstream>
using namespace std;
int main()
{
    ifstream cin("nrlipsa1.in");
    ofstream cout("nrlipsa1.out");
    int n,min=0,max=0,v[101],ok=0;
    while(cin>>n)
    {
        if(n>9 && n<100) v[n]=1;
    }
    for(int i=10;i<=98;i=i+2)
    {
        if(v[i]==0)
        {
            min=i;
            ok++;
            break;
        }
    }
    for(int i=98;i>=10;i=i-2)
    {
        if(v[i]==0)
        {
            max=i;
            ok++;
            break;
        }
    }
    if(ok==2 && min!=max) cout<<min<<" "<<max;
    else cout<<"nu exista";
}