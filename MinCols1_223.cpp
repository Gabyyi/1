#include<iostream>
#include<fstream>
using namespace std;
int main()
{
    ifstream cin("mincols1.in");
    ofstream cout("mincols1.out");
    int n,a[31][31],p=1,min,ok=0,k=1;
    cin>>n;
    for(int i=1;i<=n;i++)
        for(int j=1;j<=n;j++)
            cin>>a[i][j];
    for(int j=n;j>=1;j--)
    {
        min=100;
        for(int i=1;i<=n;i++)
            if(a[i][j]<min) min=a[i][j];
        if(a[k][n-k+1]==min) {p=p*min;ok=1;}
        k++;
    }
    if(ok==0) cout<<"NU EXISTA";
    else cout<<p%10;
}