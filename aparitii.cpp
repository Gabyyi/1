#include<iostream>
#include<fstream>
using namespace std;
int main()
{
    //0 0 0 5 5 5 5 7 7 11 20 20
    
    ifstream cin("bac.txt");
    int a,b,l=1;
    cin>>a;
    while(cin>>b)
    {
        if(a==b) l++;
        else {cout<<a<<" "<<l<<" ";l=1;}
        a=b;
    }
    if(l>0) cout<<b<<" "<<l;
}