#include<iostream>
#include<fstream>
using namespace std;
int f(int x)
{
    int nr=0,p=1;
    while(x!=0)
    {
        nr++;
        x/=10;
    }
    while(nr!=0)
    {
        p=p*10;
        nr--;
    }
    return p;
}
int main()
{
    /*int x,k,nr,y,z,gasit=0;
    ifstream cin("bac.txt");
    cin>>x>>k>>nr;
    y=x+1;
    while(gasit==0)
    {
        int p;
        p=f(x);
        z=y*p+x;
        x=y;
        y=z;
        if(z==nr) gasit=1;
    }
    cout<<x;*/


    int x,k,a,b,c,nr;
    char car;
    cin>>x>>k;
    if(x<9) {a=1;b=1;}
    else if(x==9) {a=1;b=2;}
    else {a=2;b=2;}
    //nr=cate cifre are penultimul termen
    while(a+b<=k)
    {
        c=a+b;
        a=b;
        b=c;
    }
    nr=a;
    for(int i=1;i<=nr;i++)      //citesc doar nr caractere
    {
        cin>>car;      //c este de tip char
        cout<<car;
    }

}