#include<iostream>
//#include<fstream>
using namespace std;
int main()
{
    int n,x,minim1=1000001,minim2=1000001;
    //ifstream fin("minimdoua.in");
    //ofstream fout("minimdoua.out");
    cin>>n;//fin>>n;
    for(int i=1;i<=n;i++)
    {
        cin>>x;
        if(x%10==(x%100)/10)
            if(x<minim1)
            {
                minim2=minim1;
                minim1=x;
            }
            else if(x<minim2) minim2=x;
    }
    if(minim2==1000001) cout<<"numere insuficiente";//fout<<"numere insuficiente";
    else cout<<minim1<<" "<<minim2;//fout<<minim1<<" "<<minim2;
}