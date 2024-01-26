#include<iostream>
using namespace std;
int main()
{
    int n,v[101],nr=0,l=0,lmax=-1,k=0,p=0,u=0;
    cin>>n;
    for(int i=1;i<=n;i++)
        cin>>v[i];


    /*for(int i=2;i<=n;i++)               //cate secvente maximale de elem pare exista
        if(v[i]%2!=0 && v[i-1]%2==0) nr++;
    if(v[n]%2==0) nr++;
    cout<<nr;*/


    /*for(int i=1;i<=n;i++)                //lungimea secventelor maximale de elem pare
    {
        if(v[i]%2==0) l++;
        else
        {
            if(l>0) cout<<l<<" ";
            l=0;
        }
    }
    if(l>0) cout<<l;*/


                               //nr de secvente maximale de lungime maxima
    for(int i=1;i<=n;i++)
    {
        if(v[i]%2==0) l++;
        else 
        {
            if(l>lmax) {lmax=l;nr=1;}
            else if(l==lmax) nr++;
            l=0;
        }
    }
    if(l>lmax) {lmax=l;nr=1;}
    else if(l==lmax) {lmax=l;nr++;}
    cout<<nr;


    /*for(int i=1;i<=n;i++)                //cea mai din stanga secventa maximala de lungime maxima
    {
        if(v[i]%2==0) l++;
        else
        {
            if(l>lmax)//if(l>=lmax)            //cea mai din dreapta secvanta maximala de lungime maxima
            {
                lmax=l;
                u=i-1;
            }
            l=0;
        }
    }
    if(l>lmax)//if(l>=lmax)            //cea mai din dreapta secvanta maximala de lungime maxima
    {
        lmax=l;
        u=n;
    }
    if(lmax==0) cout<<"Nu am numere pare";
    else
    {
        p=u-lmax+1;
        for(int i=p;i<=u;i++) cout<<v[i]<<" ";
    }*/
}