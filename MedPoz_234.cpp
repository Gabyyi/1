#include<iostream>
#include<fstream>
#include<iomanip>
using namespace std;
int main()
{
    ifstream cin("medpoz.in");
    ofstream cout("medpoz.out");
    int n,a[21][21],ok=0;
    double m,s=0,k=0;
    cin>>n;
    for(int i=1;i<=n;i++)
        for(int j=1;j<=n;j++)
            cin>>a[i][j];
    for(int i=1;i<=n;i++)
        for(int j=1;j<i;j++)
            if(a[i][j]>0) {s=s+a[i][j];k++;ok=1;}
    m=s/k;
    if(ok==0) cout<<"NU EXISTA";
    else cout<<fixed<<setprecision(3)<<m;


    //-----SAU-----

/*

    if(nr==0) cout<<"NU EXISTA";
    else
    {
        m=s/nr;
        m=m*1000;
        m=(int)m;
        m=m/1000;
        cout<<fixed<<setprecision(3)<<m;
    }

*/
}