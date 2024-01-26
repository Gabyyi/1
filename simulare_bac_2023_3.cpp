#include<iostream>
#include<fstream>
using namespace std;
int main()
{
    ifstream cin("bac.txt");
    int x,y=0,max=-1,k=1;
    while(cin>>x)
    {
        if(x>max)
        {
            max=x;
            cout<<k<<' ';
        }
        else if(x==max)
            if(x!=y) cout<<k<<' ';
        y=x;k++;
    }
}