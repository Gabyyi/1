#include<iostream>
#include<fstream>
using namespace std;
int main()
{
    //4 9 14 19 18 17 8 5 3 1 -1 -3 -5 -7     ->   -2

    ifstream cin("bac.txt");
    int a,b,c,l=1,lmax=-1,r=0,rmax=-1;
    cin>>a;
    cin>>b;
    r=b-a;
    while(cin>>c)
    {
        if(c-b==r) l++;
        else
        {
            if(l>lmax)
            {
                lmax=l;
                rmax=r;
            }
            else if(l==lmax)
            {
                if(r>rmax) rmax=r;
            }
            l=1;r=0;
        }
        r=c-b;
        b=c;
    }
    if(lmax==2) cout<<"nu exista";
    else if(l>lmax) rmax=r;
    else if(l==lmax)
        if(r>rmax) rmax=r;
    cout<<rmax;
}