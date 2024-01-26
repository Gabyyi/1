#include<iostream>
#include<fstream>
using namespace std;
int main()
{   
    ifstream cin("crescator1.in");
    ofstream cout("crescator1.out");
    int x,y,l=0,min=1000000000;
    cin>>x;
    while(cin>>y)
    {
        if(x==y) l++;
        else
        {
            if((l+1)%2!=0)
                if(x<min) min=x;
            l=0;
        }
        x=y;
    }
    if((l+1)%2!=0)
        if(x<min) min=x;
    if(min==1000000000) cout<<"nu exista";
    else cout<<min;
}