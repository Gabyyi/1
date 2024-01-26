#include<iostream>
using namespace std;
void citire(int a[50][50],int &n)
{
    cin>>n;
    for(int i=1;i<=n;i++)
        for(int j=1;j<=n;j++)
            cin>>a[i][j];
}
void interschimbare_linii(int a[50][50], int n, int l1, int l2)
{
    for(int j=1;j<=n;j++)
        swap(a[l1][j],a[l2][j]);
}
void interschimbare_coloane(int a[50][50], int n, int c1, int c2)
{
    for(int i=1;i<=n;i++)
        swap(a[i][c1],a[i][c2]);
}
void afisare(int a[50][50],int n)
{
    for(int i=1;i<=n;i++)
    {
        cout<<endl;
        for(int j=1;j<=n;j++)
            cout<<a[i][j]<<" ";
    }
}
int main()
{
    int a[50][50],n;
    citire(a,n);
    for(int i=1;i<n;i++)
        for(int j=i+1;j<=n;j++)
            if(a[i][i]>a[j][j]) 
            {
                interschimbare_linii(a,n,i,j);
                interschimbare_coloane(a,n,i,j);
            }
    afisare(a,n);
}