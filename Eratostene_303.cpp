#include<iostream>
#include<fstream>
using namespace std;
int prim(int x)
{
    if(x<2) return 0;
    if(x>2 && x%2==0) return 0;
    for(int d=3;d*d<=x;d=d+2)
        if(x%d==0) return 0;
    return 1;
}
int main()
{
    ifstream cin("eratostene.in");
    ofstream cout("eratostene.out");
    int n,x,C=0;
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        cin>>x;
        if(prim(x)) C++;
    }
    cout<<C;
}