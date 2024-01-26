#include<iostream>
using namespace std;
int pozmax(int v[], int n, int p)
{
    int max=v[1],poz=1;
    for(int i=2;i<=p;i++)
        if(v[i]>max) {max=v[i];poz=i;}
    return poz;
}
void schimb(int &a, int &b)
{
    int aux;
    aux=a;
    a=b;
    b=aux;
}
int main()
{
    int n,v[101],k;
    cin>>n;
    for(int i=1;i<=n;i++)
        cin>>v[i];
    for(int p=n;p>=2;p--)
    {
        k=pozmax(v,n,p);
        schimb(v[k],v[p]);
    }
    for(int i=1;i<=n;i++)
        cout<<v[i]<<" ";
}






/*int pozmax(int v[], int p)
{
    int max=0;
    for(int i=1;i<=p;i++)
        if(v[i]>max) max=v[i];
    return max;
}
void schimb(int &a, int &b)
{
    swap(a,b);
}
int main()
{
    int n,v[101];
    cin>>n;
    for(int i=1;i<=n;i++)
        cin>>v[i];
    for(int i=1;i<n;i++)
        for(int j=i+1;j<=n;j++)
            if(v[j]<pozmax(v,i)) schimb(v[i],v[j]);
    for(int i=1;i<=n;i++)
        cout<<v[i]<<" ";
}*/