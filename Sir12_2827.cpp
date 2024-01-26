#include<iostream>
#include<fstream>
using namespace std;
int main()
{
    ifstream cin("sir12.in");
    ofstream cout("sir12.out");
    int x,k1=0,k2=0,a=0,b=0,max=0;
    while(cin>>x)
    {
        if(k1<3 && x%2!=0) k1++;
        else if(k1==3)
        {
            if(x%2!=0) k2++;
            else if(x%2==0 && k2==0)
            {
                a=x;
                b=max;
                if(a>max) max=a;
            }
        }
    }
    if(a==0 || b==0) cout<<"Nu exista";
    else cout<<b<<' '<<a;




    int nri=0,max1=0,max2=0,x;
    while(fin>>x)
    {
        if(x%2!=0) {nri++;if(nri>3) break;}
        else
        {
            if(nri==3)
            {
                if(x>max1) {max2=max1;max1=x;}
                else if(x>max2) max2=x;
            }
        }
    }
    if(max2==0) cout<<"Nu exista";
    else cout<<max2<<' '<<max1;

}