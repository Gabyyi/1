#include<iostream>
using namespace std;
void citire(int v[],int &n)
{
    cin>>n;
    for(int i=1;i<=n;i++)
        cin>>v[i];
}
void sortare(int v[],int p,int u,char crt)
{
    //crt poate fi 0 pt crescator sau 1 pt descrescrescator
    //fct sorteaza v[p],v[p+1],..,v[u]
    if(crt=='c')
    {
        for(int i=p;i<=u-1;i++)
            for(int j=i+1;j<=u;j++)
                if(v[i]>v[j]) swap(v[i],v[j]);
    }
    else
    {
        for(int i=p;i<=u-1;i++)
            for(int j=i+1;j<=u;j++)
                if(v[i]<v[j]) swap(v[i],v[j]);
    }
}
void afisare(int v[], int n)
{
    for(int i=1;i<=n;i++)
        cout<<v[i]<<" ";
}
int main()
{
    int n,v[101];
    citire(v,n);
    sortare(v,1,n/2,'c');
    sortare(v,n/2+1,n,'d');
    afisare(v,n);
} 