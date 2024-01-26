#include<iostream>
using namespace std;
void inserare158()
{
    int n,i,p,x;
    cout<<"n=";cin>>n;
    int v[n];
    for(i=1;i<=n;i++)
    {
        cout<<"v["<<i<<"]=";cin>>v[i];
    }
    cout<<"p=";cin>>p;
    cout<<"x=";cin>>x;
    for(i=n;i>=p;i--)
        v[i+1]=v[i];
    n++;
    v[p]=x;
    for(i=1;i<=n;i++)
    {
        cout<<v[i]<<" ";
    }
}
void inserareDupa159()
{
    int n,i,p;
    cout<<"n=";cin>>n;
    int v[n];
    for(i=1;i<=n;i++)
    {
        cout<<"v["<<i<<"]=";cin>>v[i];
    }
    p=1;
    while(p<=n)
    {
        if(v[p]%2==1) p++;
        else
        {
            for(i=n;i>=p+1;i--)
                v[i+1]=v[i];
            v[p+1]=v[p]*2;
            n++;
            p=p+2;
        }
    }
    for(i=1;i<=n;i++)
    {
        cout<<v[i]<<" ";
    }

}
void stergere_element1452()
{
    int n,p,i;
    cout<<"n=";cin>>n;
    int v[n];
    for(i=1;i<=n;i++)
    {
        cout<<"v["<<i<<"]=";cin>>v[i];
    }
    cout<<"p=";cin>>p;
    for(i=p+1;i<=n;i++)
        v[i-1]=v[i];
    n--;
    for(i=1;i<=n;i++)
        cout<<v[i]<<" ";
}
void stergerelempare1453()
{
    int n,p,i;
    cout<<"n=";cin>>n;
    int v[n];
    for(i=1;i<=n;i++)
    {
        cout<<"v["<<i<<"]=";cin>>v[i];
    }
    p=1;
    while(p<=n)
    {
        if(v[p]%2==1) p++;
        else
        {
            for(i=p+1;i<=n;i++)
                v[i-1]=v[i];
            n--;
        }
    }
    for(i=1;i<=n;i++)
        cout<<v[i]<<" ";
}
int main()
{
    int a;
    do
    {
        cout<<"Introdu nr. problemei:";cin>>a;
    } while (a<0 || a>4);
    if(a==1) inserare158();
    else if(a==2) inserareDupa159();
    else if(a==3) stergere_element1452();
    else if(a==4) stergerelempare1453();
}