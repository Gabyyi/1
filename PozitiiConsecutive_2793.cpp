#include<iostream>
#include<fstream>
using namespace std;
int main()
{
    //ifstream fin("pozitiiconsecutive.in");
    //ofstream fout("pozitiiconsecutive.out");
    int x,y,aux=0;
    cin>>x>>y;//fin>>x>>y;
    cout<<y<<" "<<x<<" ";//fout<<y<<" "<<x<<" ";
    aux=2*x+2-y;
    while(aux>7)
    {
        cout<<aux<<" ";//fout<<aux<<" ";
        y=x;
        x=aux;
        aux=2*x+2-y;
    }
    cout<<3<<" "<<0;//fout<<3<<" "<<0;
}