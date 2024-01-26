#include<iostream>
#include<cstring>
#include<fstream>
using namespace std;

//-----problema 1-----

//2019 -> 201199

void duplicare(int n, int &d)
{
    int p=1,gasit=0;
    while(n!=0)
    {
        if(n%10%2!=0)
        {
            gasit=1;
            d=d+(n%10)*p;
            p=p*10;
            d=d+(n%10)*p;
            p=p*10;
        }
        else
        {   
            d=d+(n%10)*p;
            p=p*10;
        }
        n=n/10;
    }
    if(gasit==0) d=-1;
}
void dpl()
{
    int n,d=0;
    cin>>n;
    duplicare(n,d);
    cout<<d;
}

//-----problema 2-----

//5
//el mergea tot spre aleea pietruita  ->  mergea aleea pietruita el tot spre

void pozitii()
{
    char s[101],*p,A[51][101],B[51][101];
    int n,a=0,b=0;
    cin>>n;
    cin.get();
    cin.get(s,102);
    p=strtok(s," ");
    while(p!=NULL)
    {
        if(strlen(p)>=n)
        {
            a++;
            strcpy(A[a],p);
        }
        else
        {
            b++;
            strcpy(B[b],p);
        }
        p=strtok(NULL," ");
    }
    if(a==0 || b==0) cout<<"nu exista";
    else
    {
        for(int i=1;i<=a;i++)
            cout<<A[i]<<endl;
        for(int i=1;i<=b;i++)
            cout<<B[i]<<endl;
    }
}

//-----problema 3-----

//10
//8 8 8 5 3 3        ->    10 9 7 6 4 2 1

void numere()
{
    //int n,x,m=0,v[100],c[100],k=1;
    ifstream fin("bac.txt");
    //fin>>n;
    //m=n;
    //fin>>n;
    //v[k]=n;
    //while(fin>>n)
    //    if(v[k]!=n)
    //    {
    //        k++;
    //        v[k]=n;
    //    }
    //for(int i=1;i<=m;i++)
    //    c[i]=m+1-i;
    //for(int i=1;i<=m;i++)
    //    for(int j=1;j<=k;j++)
    //        if(c[i]==v[j]) c[i]=0;
    //for(int i=1;i<=m;i++)
    //    if(c[i]!=0) cout<<c[i]<<" ";
    //cout<<k;


    int n,x,y,nr=0;
    fin>>n;
    fin>>x;
    nr=1;
    while(fin>>y)
    {
        if(y!=x) nr++;
        x=y;
    }
    cout<<n-nr;



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
        if(op==1) dpl();
        if(op==2)
        {
            cin.get();
            pozitii();
        }
        if(op==3) numere();
    }
}