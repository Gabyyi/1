#include<iostream>
#include<cstring>
#include<fstream>
using namespace std;

//-----problema 1-----

void schimb(int &n, int x, int p)
{
    int k=0,m=0,poz=1;
    m=n;n=0;
    while(m!=0)
    {
        if(k==p) n=n+poz*x;
        else n=n+poz*(m%10);
        m/=10;
        k++;poz*=10;
    }
}
void sch()
{
    int n,x,p;
    cin>>n>>x>>p;
    schimb(n,x,p);
    cout<<n;
}




//-----problema 2-----

void vocala_prietena()
{
    char s[51];
    cin>>s;
    for(int i=0;i<strlen(s);i++)
        if(strchr("aeiou",s[i])==0)
            for(char j=s[i];j>='a';j--)
                if(strchr("aeiou",j)!=NULL) {swap(s[i],j);break;}
    cout<<s;
}





//-----problema 3-----
//2 3 5 1 7 9 8 4 4 11 15 17 21 11 6 11 15 17 21 11 6 5 2 6 4 0 16   =>  4 5

void secventa_paritara()
{
    ifstream fin("bac.txt");
    int a,b,l=0,lmax=-1,k=0;
    fin>>a;
    while(fin>>b)
    {
        if(a%2==b%2) l++;
        else
        {
            if(l>lmax) {lmax=l;k=1;}
            else if(l==lmax) k++;
            l=0;
        }
        a=b;
    }
    if(l>lmax) {k=1;lmax=l;}
    else if(lmax==l) k++;
    cout<<k<<' '<<lmax+1;
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
        if(op==1) sch();
        if(op==2) vocala_prietena();
        if(op==3) secventa_paritara();
    }
}