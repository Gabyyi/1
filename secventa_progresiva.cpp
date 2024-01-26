#include<iostream>
#include<fstream>
using namespace std;
int main()
{
    /*ifstream fin("bac.txt");
    int n,nr=0,max=0,x=0,m;
    fin>>n;
    while(n!=0)
    {
        nr++;
        if(nr==n) x=x+nr;
        if(x>max) max=x;
        m=n;
        fin>>n;
        if(m!=n)
        {
            if(nr!=m) x=0;
            nr=0;
        }
    }
    cout<<max;*/

    ifstream fin("bac.txt");
    int n,nr=0,max=0,x=0,m;
    fin>>n;   //primul nr din fisier
    nr=1;   //nr de aparitii
    while(fin>>m)
    {
        if(m==n) nr++;
        else
        {
            if(nr==n) x=x+nr; //lungimea seventei progresive
            else
            {
                if(x>max) max=x;
                x=0;
            }
            nr=1;
            n=m;
        }
    }
    //pentru ultima secventa, cea care se termina cand se termina sirul
    if(nr==n)
    {
        x=x+nr;
        if(x>max) max=x;
    }
    cout<<max;
}
//1 2 2 3 4 4 4 4 6 6 6 6 6 6 7 7 7 8 8 8 8 8 8 8 8 0