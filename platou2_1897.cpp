#include<iostream>
#include<fstream>
using namespace std;
int main()
{
    //ifstream fin("bac.txt");
    ifstream fin("platou2.in");
    ofstream fout("platou2.out");
    int n,x,y,l=0,lmax=-1;
    fin>>n;
    fin>>x;
    while(fin>>y)
    {
        if(x<y) l++;
        else
        {
            if(l>lmax) lmax=l;
            l=0;
        }
        x=y;
    }
    if(l>lmax) lmax=l;
    fout<<lmax+1;
}