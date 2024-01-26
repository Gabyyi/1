#include<iostream>
#include<fstream>
using namespace std;
//problema 1
int frate(int x, int &y)
{
    int aux=0,ok=1;
    if(x==0) return 1;
    while(x!=0)
    {
        if(x%10==9)
            return -1;
        else
        {
            aux=aux*10+(x%10+1);
            x/=10;
        }
    }
    while(aux!=0)
    {
        y=y*10+aux%10;
        aux/=10;
    }
    return y;
}
void problema1()
{
    int x,y=0;
    cin>>x;
    cout<<frate(x,y);
}

//problema 2
void problema2()
{
    int a[100][100],n,k,aux=0,i,j;
    cin>>n>>k;
    for(int i=1;i<=n;i++)
        for(int j=1;j<=n;j++)
            cin>>a[i][j];
    for(int j=n-k-1;j>=1;j--)
        swap(a[k][j],a[k][j+1]);
    for(int i=1;i<=n;i++)
    {
        cout<<endl;
        for(int j=1;j<=n;j++)
            cout<<a[i][j]<<" ";
    }
}

//problema 3
void problema3()
{
    int v[100000],n,aux=0,k=0;
    ifstream fin("bac.txt");
    fin>>n;
    for(int i=1;i<=n;i++)
        fin>>v[i];
    aux=v[1];
    for(int i=1;i<n;i++)
        for(int j=i+1;j<=n;j++)
            if(v[i]<v[j]) swap(v[i],v[j]);
    for(int i=1;i<=n;i++)
        if(aux==v[i]) k=i;
    cout<<k;
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
        if(a==1) problema1();
        if(a==2) problema2();
        if(a==3) problema3();
        cout<<endl;
    }
}