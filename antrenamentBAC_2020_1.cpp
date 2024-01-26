#include<iostream>
#include<cstring>
#include<fstream>
using namespace std;

//-----problema 1-----

int kpn(int a, int b, int k)
{
    int s,nr=0,x=0;
    for(int i=a;i<=b;i++)
    {
        s=1;
        for(int j=2;j<=i/2;j++)
            if(i%j==0) s=s+j;
        s=s+i;
        if((s%2==1 && i%2==1) || (s%2==0 && i%2==0)) nr++;
        if(nr==k) 
        {
            x=i;
            break;
        }
    }
    if(x!=0) return x;
    else return -1;
}
void p_numar()
{
    int a,b,k;
    cin>>a>>b>>k;
    cout<<kpn(a,b,k);
}


//-----problema 2-----

void in_oglinda()
{
    char s[101],*p,c[51][101],v[101];
    int k=0,ok=0;;
    cin.get(s,102);
    p=strtok(s," ");
    while(p!=NULL)
    {
        k++;
        strcpy(c[k],p);
        p=strtok(NULL," ");
    }
    for(int i=1;i<=k;i++)
    {
        if(strlen(c[i])%2==1)
        {
            strcpy(v,c[i]);
            strrev(c[i]);
            if(strcmp(v,c[i])!=0) ok=1;
        }
    }
    if(ok==1)
        for(int i=1;i<=k;i++)
            cout<<c[i]<<" ";
    else cout<<"nu exista";
}

//-----problema 3-----

void capete_interval()
{
    //7 2 40 5 11 15 10 122 18 350   ->  9 41

    ifstream fin("bac.txt");
    int a,b,x,min=100,max=9;
    while(fin>>x)
    {
        if(x>9 && x<100)
        {
            if(x>max) max=x;
            if(x<min) min=x;
        }
    }
    a=min-1;
    b=max+1;
    cout<<a<<" "<<b;
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
        if(op==1) p_numar();
        if(op==2)
        {
            cin.get();
            in_oglinda();
        }
        if(op==3) capete_interval();
    }
}