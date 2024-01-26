#include<iostream>
#include<string.h>
#include<fstream>
using namespace std;

//problema 1

void numarare_aparitii_litera()
{
    char s[101],c;
    int nr,max=-1;
    cin.get(s,101); 
    for(int i=0;i<=strlen(s)-1;i++)
    {
        nr=0;
        for(int j=0;j<=strlen(s)-1;j++)
            if(s[i]==s[j]) nr++;
        if(nr>max)
        {
            max=nr;
            c=s[i];
            nr=0;
        }
    }
    cout<<c<<" "<<max;
}

//problema 2

int div(int n)
{
    int d=2;
    for(int i=2;i<=n/2;i++)
        if(n%i==0) d++;
    return d;
}
int numarare(int a,int b)
{
    int nr=0;
    for(int i=a;i<=b;i++)
        if(div(i)==3) nr++;
    return nr;
}
void numararee()
{
    int a,b;
    cin>>a>>b;
    cout<<numarare(a,b);
}


//problema 3

void gasire_subsiruri()
{
    
    int x[100]={0},y[100]={0};
    int n,m,a,nr=0,ct=0;
    ifstream fin("bac.txt");
    fin>>n>>m;
    for(int i=1;i<=n;i++)
    {
        fin>>a;
        x[a]++;
    }
    for(int i=1;i<=m;i++)
    {
        fin>>a;
        y[a]++;
    }
    nr=1000000;
    for(a=0;a<=99;a++)
        if(y[a]>0)
        {
            ct=x[a]/y[a];
            if(ct<nr) nr=ct;
        }
    cout<<nr;
    
}


int main()
{
    int a=1;
    while(a!=0)
    {
        cout<<"1-Problema 1"<<endl;
        cout<<"2-Problema 2"<<endl;
        cout<<"3-Problema 3"<<endl;
        cout<<"0-Iesire"<<endl;
        cout<<"Optiunea: ";cin>>a;
        if(a==1) 
        {
            cin.get();
            numarare_aparitii_litera();
        }
        if(a==2) numararee();
        if(a==3) gasire_subsiruri();
        cout<<endl;
    }
}