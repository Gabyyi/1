#include<iostream>
#include<cmath>
#include<cstring>
#include<fstream>
using namespace std;

//-----problema 1-----

int multiplu(int n)
{
    int i=1,gasit=0,m=0;
    while(gasit==0)
    {
        m=i*n;
        for(int j=1;j<=n;j++)
            if(sqrt(m)==j) gasit=1;
        i++;
    }
    return m;
}
void Multiplu()
{
    int n;
    cin>>n;
    cout<<multiplu(n);
}

//-----problema 2-----

//mai bine sa fii un <om de valoare> decat un <om de succes>    ->    mai bine sa fii un <OM DE VALOARE> decat un <OM DE SUCCES>

void citat()
{
    char s[101];
    cin.get(s,102);
    for(int i=0;i<strlen(s);i++)
    {
        if(s[i]!='<') cout<<s[i];
        else if(s[i]=='<')
        {
            cout<<s[i];
            while(s[i+1]!='>')
            {
                if(s[i+1]==' ') cout<<"";
                else s[i+1]=s[i+1]-32;
                cout<<s[i+1];
                i++;
            }
        }
    }
}

//-----problema 3-----

// 2 7 10 5 6 2 1 3 20 17 9 11 7 3 10 6 2    ->   11

void varf()
{
    int n,v[100],k=0,min=999,m=0;
    ifstream fin("bac.txt");
    while(fin>>n)
    {
        k++;
        v[k]=n;
    }
    for(int i=2;i<k;i++)
    {
        if(v[i]>v[i-1] && v[i]>v[i+1])
        {
            if(abs(v[i-1]-v[i+1])<min)
            {
                min=abs(v[i-1]-v[i+1]);
                m=v[i];
            }
            else if(abs(v[i-1]-v[i+1])==min)
                if(v[i]>m) m=v[i];

            /*if(v[i-1]-v[i+1]<0)
            {
                if(v[i+1]-v[i-1]<min)
                {
                    min=v[i+1]-v[i-1];
                    m=v[i];
                }
                else if((v[i+1]-v[i-1])==min)
                    if(v[i]>m) m=v[i];
            }
            else if(v[i-1]-v[i+1]>=0)
            {
                if(v[i-1]-v[i+1]<min)
                {
                    min=v[i-1]-v[i+1];
                    m=v[i];
                }
                else if((v[i-1]-v[i+1])==min)
                    if(v[i]>m) m=v[i];
            }
            cout<<m<<" "<<min<<endl;*/
        }
    }
    cout<<m;
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
        if(op==1) Multiplu();
        if(op==2)
        {
            cin.get();
            citat();
        }
        if(op==3) varf();
    }
}