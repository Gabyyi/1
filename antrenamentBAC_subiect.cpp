#include<iostream>
#include<fstream>
using namespace std;

//-----problema 1-----

void divizor(int n, int &d)
{
    int e=0,f=3;
    while(n%2==0)
    {
        e++;
        n/=2;
    }
    if(e>0) d=2;
    while(f*f<=n)
    {
        e=0;
        while(n%f==0)
        {
            e++;
            n/=f;
        }
        if(e>0) d=f;
        f=f+2;
    }
    if(n!=1) d=n;
}
void problema1()
{
    int n,d=0;
    cin>>n;
    divizor(n,d);
    cout<<d;
}


//-----problema2-----

void problema2()
{
    int n,a[24][24];
    cin>>n;
    for(int i=1;i<=n;i++)
        for(int j=1;j<=n;j++)
            a[i][j]=3;
    for(int j=1;j<=n;j++)
        a[n/2+1][j]=1;
    for(int i=1;i<=n;i++)
        a[i][n/2+1]=1;
    a[n/2+1][n/2+1]=2;
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=n;j++)
            cout<<a[i][j]<<" ";
        cout<<endl;
    }
}


//-----problema3-----
/*
30
16 8 7 7 7 7 7 7 7 7 7 7 7 7 7 7 7 7 7 7 7 7 7 7 7 7 7 7 2 1          ->    8

6
7 7 7 7 2 1     ->   nu exista
*/

void problema3()
{
    //ifstream cin("bac.txt");
    int n,x,y=0,i=1,z=0,m=0;
    cin>>n;
    m=n/2;
    cin>>x;
    n--;
    y=x;
    while(n!=0)
    {
        cin>>x;
        if(i<=m)
        {
            if(y>x) z=y;
            y=x;
        }
        i++;
        n--;
    }
    if(z!=0) cout<<z;
    else cout<<"nu exista";
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