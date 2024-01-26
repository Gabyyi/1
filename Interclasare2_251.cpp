#include<iostream>
#include<fstream>
using namespace std;
int main()
{
    ifstream cin("interclasare2.in");
    ofstream cout("interclasare2.out");
    int n,m,a[100001],b[100001],c[100001],i,j,k=0;
    cin>>n;
    for(i=1;i<=n;i++)
        cin>>a[i];
    cin>>m;
    for(i=1;i<=m;i++)
        cin>>b[i];
    i=1;j=1;
    while(i<=n && j<=m)
    {
        if(a[i]==b[j]) {k++;c[k]=a[i];i++;j++;}
        else if(a[i]>b[j]) j++;
        else i++;
    }
    for(int p=1;p<=k;p++)
    {
        cout<<c[p]<<' ';
        if(p%10==0) cout<<endl;
    }
}