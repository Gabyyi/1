#include<iostream>
using namespace std;

//metoda 1

int main()
{
  int n,v[10001],y[10001],cifmin=10,max=-1;
    cin>>n;
    for(int i=1;i<=n;i++)
        cin>>v[i];
    for(int i=1;i<=n;i++)
    {
        y[i]=v[i];
        while(y[i]>10)
        {
            y[i]/=10;
        }
        if(y[i]<cifmin)
            cifmin=y[i];
    }
    for(int i=1;i<=n;i++)
        if(cifmin==y[i])
            if(v[i]>max) max=v[i];
    cout<<max;
}


//metoda 2

int pc(int x)
{
    while(x>9) x=x/10;
    return x;
}
int main()
{
    int n,i,x,c,cmin=10,nr;
    cin>>n;
    for(int i<=1;i<=n;i++)
    {
        cin>>x;
        c=pc(x);
        if(c<cmin) {cmin=c;nr=x;}
        else if(c==cmin && x>nr) nr=x;
    }
    cout<<nr;
}