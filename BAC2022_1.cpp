#include<iostream>
#include<fstream>
using namespace std;

//-----problema 1-----
//202233228  ->  202033208

void secventa(int &n)
{
    int c1=0,c2=0,m=0,p=1;
    m=n;
    n=0;
    while(m>9)
    {
        c1=m%10;
        m/=10;
        c2=m%10;
        if(c1==2 && c2==2) c1=0;
        n=c1*p+n;
        p=p*10;
    }
    n=m*p+n;
}
void secv()
{
    int n;
    cin>>n;
    secventa(n);
    cout<<n;
}






//-----problema 2-----
/*
5 4
5 3 4 6
7 5 9 3
6 8 3 9
4 5 2 3
3 1 4 4*/

void plaja()
{
    int a[12][12],m,n,x=0,y=0,s=0,i,j,l=0,c=0;
    cin>>m>>n;
    for(i=1;i<=m;i++)
        for(j=1;j<=n;j++)
            cin>>a[i][j];
    for(int i=1;i<=m;i++)
    {
        a[i][0]=11;
        a[i][n+1]=11;
    }
    for(int j=1;j<=n;j++)
    {
        a[0][j]=11;
        a[m+1][j]=11;
    }
    for(int i=1;i<=m;i++)
        for(int j=1;j<=n;j++)
        {
            int min=a[i-1][j];
            if(a[i][j+1]<min) min=a[i][j+1];
            if(a[i+1][j]<min) min=a[i+1][j];
            if(a[i][j-1]<min) min=a[i][j-1];
            if(a[i][j]<min) min=a[i][j];
        }
    /*
    for(i=1;i<=m;i++)
    {
        x=0;
        x=a[i][1];l=0;c=0;
        for(j=2;j<=n;j++)
        {
            if(x>a[i][j])
            {
                x=a[i][j];
                l=i;c=j;
            }
        }
        if(l==1 && c==1)
        {
            y=min(a[1][2],a[2][1]);
            if(y>x) s=s+(y-x);
        }
        else if(l==1 && c==n)
        {
            y=min(a[1][n-1],a[2][n]);
            if(y>x) s=s+(y-x);
        }
        else if(l==m && c==1)
        {
            y=min(a[m-1][1],a[m][2]);
            if(y>x) s=s+(y-x);
        }
        else if(l==m && c==n)
        {
            y=min(a[m][n-1],a[m-1][n]);
            if(y>x) s=s+(y-x);
        }
        else if(l==1)
        {
            y=min(min(a[1][c-1],a[1][c+1]),a[2][c]);
            if(y>x) s=s+(y-x);
        }
        else if(l==m)
        {
            y=min(min(a[m][c-1],a[m][c+1]),a[m-1][c]);
            if(y>x) s=s+(y-x);
        }
        else if(c==1)
        {
            y=min(min(a[l-1][1],a[l+1][1]),a[l][2]);
            if(y>x) s=s+(y-x);
        }
        else if(c==n)
        {
            y=min(min(a[l-1][n],a[l+1][n]),a[l][n-1]);
            if(y>x) s=s+(y-x);
        }
        else
        {
            y=min(min(a[l][c-1],a[l][c+1]),min(a[l-1][c],a[l+1][c]));
            if(y>x) s=s+(y-x);
        }
    }         */
    cout<<s;
}







//-----problrma 3-----
/*2 9
1 1 1 2 2 3 5 5 5 5 6 6 7 8 10 10 12 15 21 21*/

void interval()
{
    int x,y,a,b,nr=0;
    ifstream fin("bac.txt");
    fin>>x>>y;
    fin>>a;
    if(a>=x && a<=y) nr=1;
    while(fin>>b)
    {
        if(a>=x && a<=y)
            if(a!=b) nr++;
        a=b;
    }
    cout<<nr;
}









int main()
{
    int op=1;
    while(op!=0)
    {
        cout<<endl;
        cout<<"1-Problema 1"<<endl;
        cout<<"2-Problema 2"<<endl;
        cout<<"3-Problema 3"<<endl;
        cout<<"0-Iesire"<<endl;
        cout<<"Optiunea: ";cin>>op;
        if(op==1) secv();
        if(op==2) plaja();
        if(op==3) interval();
    }
}