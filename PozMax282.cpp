#include<iostream>
//#include<fstream>
using namespace std;
int main()
{
    float n,x,p=0,u=0,max=-1000000000;
    //ifstream fin("pozmax.in");
    //ofstream fout("pozmax.out");
    cin>>n;//fin>>n;
    for(int i=1;i<=n;i++)
    {
        cin>>x;//fin>>x;
        if(x==max) u=i;
        else if(x>max)
        {
            max=x;
            p=i;
        }
    }
    cout<<p<<" "<<u;//fout<<p<<" "<<u;
}