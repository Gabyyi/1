#include<iostream>
#include<fstream>
using namespace std;
void citire(float v[], int &n)
{
    ifstream f("nr.in.txt");
    n=0;
    float x;
    while(f>>x)
    {
        v[n]=x;
        n++;
    }
}
void afisare(float v[], int n)
{
    /*for(int i=n-1;i>=0;i--)
        cout<<v[i]<<" ";*/
    if(n!=0)
    {
        cout<<v[n-1]<<" ";
        afisare(v,n-1);
    }
}
float minim(float v[], int n)
{
    if(n==1) return v[0];
    return min(v[n-1],minim(v,n-1));
}
int nr_pozitive(float v[], int n)
{
    /*if(n==1)
    {
        if(v[0]>0) return 1;
        return 0;
    }
    if(v[n-1]>0) return 1+nr_pozitive(v,n-1);
    return nr_pozitive(v,n-1);*/
    if(n==0) return 0;
    if(v[n-1]>0) return 1+nr_pozitive(v,n-1);
    return nr_pozitive(v,n-1);
}
int main()
{
    float v[100];
    int n;
    citire(v,n);
    afisare(v,n);
    cout<<'\n'<<minim(v,n)<<" "<<nr_pozitive(v,n);
}