#include<iostream>
#include<cstring>
using namespace std;

//problema 1
//cea mai mare valoare naturală din intervalul [1,n] pentru care atât restul 
//împărțirii la x, cât și restul împărțirii la y, sunt egale cu 2, sau 0 dacă nu există o astfel de valoare.

void rest(int x,int y,int n,int &k)
{
    for(k=n;k>=1;k--)
        if(k%x==2 && k%y==2) return;
}
void problema1()
{
    int x,y,n,k=0;
    cin>>x>>y>>n;
    rest(x,y,n,k);
    cout<<k;
}

//problema 2
//DAN MARIS; DANILA PREPELEAC; DAN POPA; EDANA DAN;
void problema2()
{
    char s[251],x[11],*p,v[50][251],pren[25][251],nume[25][251];
    cin.get(s,251);
    cin>>x;
    int k=0;
    p=strtok(s,"; ");
    while(p!=NULL)
    {
        k++;
        strcpy(v[k],p);
        p=strtok(NULL,"; ");
    }
    for(int i=1;i<=k;i++)
    {
        p=strtok(v[i]," ");
        strcpy(pren[i],p);
        p=strtok(NULL," ");
        strcpy(nume[i],p);
    }
    for(int i=1;i<=k;i++)
        if(strcmp(pren[i],x)==0) cout<<nume[i]<<" ";
}

int main()
{
    //problema1();
    problema2();
}