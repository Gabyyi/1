#include<iostream>
using namespace std;
int main()
{
    int a[100][100],n,m,max=-1,min=1000000,imin,imax,jmin,jmax;
    cin>>n>>m;
    for(int i=1;i<=n;i++)
        for(int j=1;j<=m;j++)
        {
            cin>>a[i][j];
            if(a[i][j]>max) {max=a[i][j];imax=i;jmax=j;}
            if(a[i][j]<min) {min=a[i][j];imin=i;jmin=j;}
        }
    if(imin==imax)
    {
        for(int i=imin+1;i<n;i++)
            for(int j=1;j<=m;j++) a[i-1][j]=a[i][j];
        n--;
    }
    if(imin!=imax)
    {
        if(imin>imax) swap(imin,imax);
        for(int i=imax+1;i<=n;i++)
            for(int j=1;j<=m;j++) a[i-1][j]=a[i][j];
        n--;
        for(int i=imin+1;i<=n;i++)
            for(int j=1;j<=m;j++) a[i-1][j]=a[i][j];
        n--;
    }
    if(jmin==jmax)
    {
        for(int i=1;i<=n;i++)
            for(int j=jmin+1;j<=m;j++) a[i][j-1]=a[i][j];
        m--;
    }
    if(jmin!=jmax)
    {
        if(jmin>jmax) swap(jmin,jmax);
        for(int i=1;i<=n;i++)
            for(int j=jmax+1;j<=m;j++) a[i][j-1]=a[i][j];
        m--;
        for(int i=1;i<=n;i++)
            for(int j=jmin+1;j<=m;j++) a[i][j-1]=a[i][j];
        m--;
    }
    cout<<n<<" "<<m<<endl;
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=m;j++)
            cout<<a[i][j]<<" ";
        cout<<endl;
    }
}