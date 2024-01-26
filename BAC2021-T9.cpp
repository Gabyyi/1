#include<iostream>
#include<cstring>
using namespace std;

//problema 1

void divizor(int a,int b,int k,int &nr)
{
    if(a>b) swap(a,b);
    for(int i=a;i<=b;i++)
        if(i%k==0 && i%10==k)  nr++;
    return;
}
void problema1()
{
    int a,b,k,nr=0;
    cin>>a>>b>>k;
    divizor(a,b,k,nr);
    cout<<nr;
}

//problema 2
//a plantat cinci lalele visinii sau rosii

void problema2()
{
    char s[101],*p,v[50][101],z;
    int k=0,x=0,y=0,gasit=0;;
    cin.get(s,102);
    p=strtok(s," ");
    while(p!=NULL)
    {
        k++;
        strcpy(v[k],p);
        for(int i=0;i<strlen(v[k]);i++)
            if(strchr("aeiou",v[k][i])!=NULL)
            {
                x++;
                z=v[k][i];
            }
        for(int i=0;i<strlen(v[k]);i++)
            if(v[k][i]==z) y++;
        if(x==y) gasit=1;
        if(gasit==1) cout<<v[k]<<endl;
        p=strtok(NULL," ");
    }
    
    if(gasit==0) cout<<"nu exista";
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
        //if(a==3) problema3();
    }
}