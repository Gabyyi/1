#include<iostream>
#include<fstream>
using namespace std;

//problema 1

int armonie(int x,int y)
{
    int sx=0,sy=0;
    for(int i=1;i<=x/2;i++)
        if(x%i==0) sx=sx+i;
    sx=sx+x;
    for(int i=1;i<=y/2;i++)
        if(y%i==0) sy=sy+i;
    sy=sy+y;
    if(((x+y)>sx && (x+y)<sy) || ((x+y)>sy && (x+y)<sx)) return 1;
    return 0;
}
void problema1()
{
    int x,y;
    cin>>x>>y;
    cout<<armonie(x,y);
}

//problema 2
/*4 5 7 2
2 7 3 6
7 6 4 0
6 9 8 7
8 0 5 4*/

void problema2()
{
    int m,n,a[100][100];
    cin>>m>>n;
    for(int i=1;i<=m;i++)
        for(int j=1;j<=n;j++)
            cin>>a[i][j];
    for(int i=1;i<n;i++)
        for(int j=2;j<=m;j++)
            if(a[1][i]==a[j][n]) cout<<a[1][i]<<" ";
}

//problema3
//15 7 15 17 6 4

void problema3()
{
    int n,v[100],x=0;
    cin>>n;
    ifstream fin("bac.txt");
    for(int i=1;i<=n;i++)
        fin>>v[i];
    x=v[1];
    for(int i=1;i<n;i++)
        for(int j=i+1;j<=n;j++)
            if(v[i]>=v[j]) swap(v[i],v[j]);
    for(int i=1;i<=n;i++)
        if(v[i]==x)
        {
            cout<<i;
            break;
        }
}

int main()
{
    int a=1;
    while(a!=0)
    {
        cout<<endl;
        cout<<"1-Problema 1"<<endl;
        cout<<"2-Problema 2"<<endl;
        cout<<"3-Problema 3"<<endl;
        cout<<"0-Iesire"<<endl;
        cout<<"Optiunea: ";cin>>a;
        if(a==1) problema1();
        if(a==2) problema2();
        if(a==3) problema3();
    }
}