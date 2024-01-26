#include<iostream>
#include<fstream>
using namespace std;
int main()
{
    ifstream cin("mincols.in");
    ofstream cout("mincols.out");
    int n,a[51][51],min;
    cin>>n;
    for(int i=1;i<=n;i++)
        for(int j=1;j<=n;j++)
            cin>>a[i][j];
    for(int j=1;j<=n;j++)
    {
        min=1001;
        for(int i=1;i<=n;i++)
            if(a[i][j]<min) min=a[i][j];
        cout<<min<<" ";
    }
}