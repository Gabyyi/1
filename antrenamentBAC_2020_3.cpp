#include<iostream>
#include<cstring>
#include<fstream>
using namespace std;

//-----problema 1-----

//  20  12  ->  7

int suma(int a, int b)
{
    int c=0,s=0;
    if(a>b) c=b;
    else c=a;
    for(int i=1;i<=c;i++)
        if(a%i==0 && b%i==0) s=s+i;
    return s;
}
void Suma()
{
    int a,b;
    cin>>a>>b;
    cout<<suma(a,b);
}

//-----problema 2-----

//un palc mic de scolarite ilumina sala   ->   un alcp icm de colarites luminai alas

void rotire_spre_stanga()
{
    char s[101],*p,c;
    int k=0;
    cin.get(s,102);
    p=strtok(s," ");
    while(p!=NULL)
    {
        if(strlen(p)>=3)
        {
            c=p[0];
            for(int i=0;i<strlen(p);i++)
            {
                p[i]=p[i+1];
            }
            p[strlen(p)]=c;
            cout<<p<<" ";
        }
        else cout<<p<<" ";
        p=strtok(NULL," ");
    }

}

//-----problema 3-----

//100 30 100 30 500 30 30   ->   (100 30 30 500 30 30 100)   ->   DA
//100 30 100 30 500 30 30 100   ->   NU

void palindromic()
{
    int n,v[100],c[100],k=0,nr=0,ok=0;
    ifstream fin("bac.txt");
    while(fin>>n)
    {
        k++;
        v[k]=n;
        c[k]=v[k];
    }
    for(int i=1;i<=k;i++)
    {
        nr=0;
        for(int j=i;j<=k;j++)
        {
            if(v[i]==c[j])
            {
                nr++;
                c[j]=0;
            }
        }
        if(nr%2!=0) ok++;
    }
    if(ok>1) cout<<"NU";
    else cout<<"DA";
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
        if(op==1) Suma();
        if(op==2)
        {
            cin.get();
            rotire_spre_stanga();
        }
        if(op==3) palindromic();
    }
}