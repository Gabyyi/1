#include<iostream>
#include<cstring>
using namespace std;
//problema 1

int numimp(int n,int v[],int c)
{
    for(int i=1;i<=n;i++)
        while(v[i]!=0)
        {
            if(v[i]%10%2!=0)
            {
                c++;
                break;
            }
            v[i]/=10;
        }
    return c;
}
void problema1()
{
    int n,v[100],c;
    cin>>n;
    for(int i=1;i<=n;i++)
        cin>>v[i];
    cout<<numimp(n,v,c);
}


//problema 2

void problema2()
{
    char s[101],c[11],*p,v[51][101];
    int k=0,ok=0;
    cin.get(c,11);
    cin.get();
    cin.get(s,101);
    p=strtok(s," ");
    while(p!=NULL)
    {
        k++;
        strcpy(v[k],p);
        p=strtok(NULL," ");
    }
    if(strcmp(c,v[1])==0 || strcmp(c,v[k])==0) cout<<"NU EXISTA"<<endl;
    for(int i=2;i<=k-1;i++)
        if(strcmp(c,v[i])==0)
        {
            cout<<v[i-1]<<" "<<v[i+1]<<endl;
            ok=1;
        }
    if(ok==0) cout<<"NU EXISTA";
}


//problema 3

void problema3()
{
    int n,v[100],min=9999,max=-1,a=0,b=0,c=0,d=0;
    cin>>n;
    for(int i=1;i<=n;i++)
        cin>>v[i];
    for(int i=1;i<n;i++)
    {
        if(abs(v[i]-v[i+1])>=max)
        {
            max=abs(v[i]-v[i+1]);
            a=v[i];
            b=v[i+1];
        }
        if(abs(v[i]-v[i+1])<=min)
        {
            min=abs(v[i]-v[i+1]);
            c=v[i];
            d=v[i+1];
        }

    }
    cout<<max<<" "<<min<<endl<<a<<" "<<b<<endl<<c<<" "<<d;
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
        if(a==2)
        {
            cin.get();
            problema2();
        }
        if(a==3) problema3();
    }
}