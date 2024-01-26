#include<iostream>
#include<fstream>
using namespace std;
int main()
{
    //5 5 6 7 8 8 8 8 10 15 16 16 25 25 49

    ifstream cin("bac.txt");
    int a,b,ok=0;
    cin>>a;
    if(a%2==0) {cout<<a<<" ";b=a;}
    while(cin>>a)
    {
        if(a%2==0 && a!=b) {cout<<a<<" ";ok=1;}
        b=a;
    }
    if(ok==0) cout<<"nu exista";
}