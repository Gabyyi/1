#include<iostream>
#include<string.h>
using namespace std;
//problema 1
void inversare_cuvant()
{
    char s[101],*p,v[51][51];
    int max=-1,l,k=0;
    cin.get(s,101);
    p=strtok(s,"#");
    while(p!=NULL)
    {
        l=strlen(p);
        k++;
        strcpy(v[k],p);
        if(l>max) max=l;
        p=strtok(NULL,"#");
    }
    cout<<'#';
    for(int i=1;i<=k;i++)
    {
        if(strlen(v[i])==max)
        {
            for(int j=strlen(v[i])-1;j>=0;j--)
                cout<<v[i][j];
            cout<<'#';
        }
        else cout<<v[i]<<"#";
    }
}

//problema 2
int numarare(int n,int m,int a[],int b[])
{
    int ok,nr=0;
    for(int i=1;i<=n;i++)
    {
        ok=1;
        for(int j=1;j<=m;j++)
            if(a[i]>=b[j])
            {
                ok=0;
                break;
            }
        if(ok==1) nr++;
    }
    return nr;
}
void numararee()
{
    int m,n,a[20],b[20];
    cin>>n>>m;
    for(int i=1;i<=n;i++)
        cin>>a[i];
    for(int i=1;i<=m;i++)
        cin>>b[i];
    cout<<numarare(n,m,a,b);
}

//problema 3
int pc(int n)
{
    while(n>10) n/=10;
    return n;
}
void secveta_fazan()
{
    int n,v[10000],nr=1,max=-1;
    cin>>n;
    for(int i=1;i<=n;i++)
        cin>>v[i];
    for(int i=1;i<n;i++)
    {
        if((v[i]%10)==pc(v[i+1])) nr++;
        else
        {
            if(nr>max) max=nr;
            nr=1;
        }
    }
    cout<<max;
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
            inversare_cuvant();
        }
        if(a==2) numararee();
        if(a==3) secveta_fazan();
        cout<<endl;
    }
}