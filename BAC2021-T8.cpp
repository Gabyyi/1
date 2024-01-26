#include<iostream>
#include<fstream>
using namespace std;
//problema 1

void nrfp(int n,int &m)
{
    int max=0,e,f,nr=0,j;
    for(int i=2;i<=n;i++)
    {
        e=0;
        nr=0;
        j=i;
        while(j%2==0)
        {
            j/=2;
            e++;
        }
        if(e>0) nr++;
        f=3;
        while(f*f<=j)
        {
            e=0;
            while(j%f==0)
            {
                j/=f;
                e++;
            }
            if(e>0) nr++;
            f=f+2;
        }
        if(j!=1) nr++;
        if(nr>=max)
        {
            max=nr;
            m=i;
        }
    }
    return;
}
void problema1()
{
    int n,m=0;
    cin>>n;
    nrfp(n,m);
    cout<<m;
}

//problema 2;
/*1 2 3 4 5 5 6
7 8 9 0 3 1 2
4 6 8 0 1 1 3
8 6 3 6 2 4 7
5 7 9 2 2 5 8
1 4 7 0 5 3 6
9 2 5 8 5 9 1*/
void problema2()
{
    int n,a[50][50],s=0;
    cin>>n;
    for(int i=1;i<=n;i++)
        for(int j=1;j<=n;j++)
            cin>>a[i][j];
/*  for(int i=1;i<n;i++)
        for(int j=i+1;j<n;j++)
        {
            for(int x=1;x<=n;x++)
                for(int y=n+2-x;y<n;y++)
                    if(i==x && j==y) s=s+a[i][j];
        }
    cout<<s;  */

    for(int i=1;i<n;i++)
        for(int j=i+1;j<n;j++)
            if(i+j>n+1) s=s+a[i][j];
    cout<<s;
}

//problema 3
//Exemplu: dacă fișierul conține valorile 122 1635 628 1413 1647 900 3001 4252 se afișează pe ecran 1647 3001
void problema3()
{
    int n,v[100],nr=0;
    ifstream fin("bac.txt");
    cin>>n;
    for(int i=1;i<=n;i++)
        fin>>v[i];
    for(int i=n;i>=1;i--)
    {
        if(v[i]%2!=0)
        {
            nr++;
            cout<<v[i]<<" ";
        }
        if(nr==2) break;
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