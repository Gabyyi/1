#include<iostream>
using namespace std;
void citire(int a[][100],int &n,int &m)
{
    cin>>n>>m;
    for(int i=0;i<n;i++)
        for(int j=0;j<m;j++)
            cin>>a[i][j];
}
int max_col(int a[][100],int n,int m,int c)
{
    int aux=a[0][c];
    for(int i=0;i<n;i++)
        if(a[i][c]>aux) aux=a[i][c];
    return aux;
}
int min_col(int a[][100],int n,int m,int c)
{
    int aux=a[0][c];
    for(int i=0;i<n;i++)
        if(a[i][c]<aux) aux=a[i][c];
    return aux;
}
int max_lin(int a[][100],int n,int m,int l)
{
    int aux=a[l][0];
    for(int j=0;j<m;j++)
        if(a[l][j]>aux) aux=a[l][j];
    return aux;
}
int min_lin(int a[][100],int n,int m,int l)
{
    int aux=a[l][0];
    for(int j=0;j<m;j++)
        if(a[l][j]<aux) aux=a[l][j];
    return aux;
}
int nr_sa(int a[][100],int n,int m)
{
    int nr=0;
    for(int i=0;i<n;i++)
        for(int j=0;j<m;j++)
            if((a[i][j]==max_lin(a,n,m,i) && a[i][j]==min_col(a,n,m,j)) || 
            (a[i][j]==min_lin(a,n,m,i) && a[i][j]==max_col(a,n,m,j))) nr++;
    return nr;
}
int main()
{
    int a[100][100],n,m;
    citire(a,n,m);
    cout<<nr_sa(a,n,m);
}